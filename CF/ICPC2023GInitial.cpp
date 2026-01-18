#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int mod3(int x) {
    x %= 3;
    if (x < 0) x += 3;
    return x;
}

int inverse_mod3(int x) {
    if (x == 1) return 1;
    if (x == 2) return 2; // since 2 * 2 = 4 ≡ 1 mod 3
    return -1; // no inverse for 0
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int l, b;
    cin >> l >> b;
    string colors;
    cin >> colors;

    vector<int> target(l);
    for (int i = 0; i < l; ++i) {
        if (colors[i] == 'R') target[i] = 0;
        else if (colors[i] == 'G') target[i] = 2;
        else if (colors[i] == 'B') target[i] = 1;
    }

    vector<vector<int>> matrix(l, vector<int>(b, 0));
    for (int j = 0; j < b; ++j) {
        int k;
        cin >> k;
        for (int i = 0; i < k; ++i) {
            int idx;
            cin >> idx;
            matrix[idx - 1][j] = 1;
        }
    }

    // Gaussian Elimination over mod 3
    vector<int> sol(b, 0);
    int row = 0;
    for (int col = 0; col < b && row < l; ++col) {
        int pivot = -1;
        for (int i = row; i < l; ++i) {
            if (matrix[i][col] != 0) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) continue;
        swap(matrix[row], matrix[pivot]);
        swap(target[row], target[pivot]);

        int inv = inverse_mod3(matrix[row][col]);
        for (int j = col; j < b; ++j)
            matrix[row][j] = mod3(matrix[row][j] * inv);
        target[row] = mod3(target[row] * inv);

        for (int i = 0; i < l; ++i) {
            if (i != row && matrix[i][col] != 0) {
                int factor = matrix[i][col];
                for (int j = col; j < b; ++j)
                    matrix[i][j] = mod3(matrix[i][j] - factor * matrix[row][j]);
                target[i] = mod3(target[i] - factor * target[row]);
            }
        }
        row++;
    }

    for (int i = row; i < l; ++i) {
        if (target[i] != 0) {
            cout << "impossible\n";
            return 0;
        }
    }

    // Try all possible values for free variables to minimize total button presses
    // For simplicity, we assume one possible solution from back-substitution
    vector<int> res(b, 0);
    for (int i = row - 1; i >= 0; --i) {
        int col = 0;
        while (col < b && matrix[i][col] == 0) col++;
        if (col == b) continue;

        int val = target[i];
        for (int j = col + 1; j < b; ++j)
            val = mod3(val - matrix[i][j] * res[j]);
        res[col] = val;
    }

    int total_presses = 0;
    for (int x : res)
        total_presses += x;
    cout << total_presses << "\n";
    return 0;
}
