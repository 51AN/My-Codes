#include <bits/stdc++.h>
using namespace std;

const int MOD = 3;

// Convert char to color shift to reach 'R' (0)
int toShift(char c) {
    if (c == 'R') return 0;
    if (c == 'G') return 2;
    return 1;
}

int mod3(int x) {
    x %= 3;
    if (x < 0) x += 3;
    return x;
}

int inverse(int x) {
    if (x == 1) return 1;
    if (x == 2) return 2;
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, b;
    cin >> l >> b;
    string s;
    cin >> s;

    vector<int> target(l);
    for (int i = 0; i < l; ++i)
        target[i] = toShift(s[i]);

    // Build equations for lights
    vector<vector<pair<int, int>>> eqs(l); // light equations
    for (int j = 0; j < b; ++j) {
        int k;
        cin >> k;
        for (int z = 0; z < k; ++z) {
            int id;
            cin >> id;
            --id;
            eqs[id].emplace_back(j, 1);
        }
    }

    vector<int> where(b, -1);
    vector<int> ans(b, 0);
    int row = 0;

    for (int col = 0; col < b && row < l; ++col) {
        int pivot = -1;
        for (int i = row; i < l; ++i) {
            for (auto [var, coef] : eqs[i]) {
                if (var == col && coef != 0) {
                    pivot = i;
                    break;
                }
            }
            if (pivot != -1) break;
        }

        if (pivot == -1) continue;

        swap(eqs[row], eqs[pivot]);
        swap(target[row], target[pivot]);
        where[col] = row;

        int lead_coef = 0;
        for (auto [var, coef] : eqs[row])
            if (var == col) lead_coef = coef;

        int inv = inverse(lead_coef);
        for (auto& [var, coef] : eqs[row])
            coef = mod3(coef * inv);
        target[row] = mod3(target[row] * inv);

        for (int i = 0; i < l; ++i) {
            if (i == row) continue;
            int factor = 0;
            for (auto [var, coef] : eqs[i])
                if (var == col) factor = coef;
            if (factor == 0) continue;

            // Eliminate col from eqs[i]
            vector<pair<int, int>> new_row;
            size_t p1 = 0, p2 = 0;
            while (p1 < eqs[i].size() || p2 < eqs[row].size()) {
                int vi = p1 < eqs[i].size() ? eqs[i][p1].first : b;
                int vr = p2 < eqs[row].size() ? eqs[row][p2].first : b;
                if (vi == vr) {
                    int val = mod3(eqs[i][p1].second - factor * eqs[row][p2].second);
                    if (val != 0) new_row.emplace_back(vi, val);
                    ++p1; ++p2;
                } else if (vi < vr) {
                    new_row.emplace_back(vi, eqs[i][p1].second);
                    ++p1;
                } else {
                    int val = mod3(-factor * eqs[row][p2].second);
                    if (val != 0) new_row.emplace_back(vr, val);
                    ++p2;
                }
            }
            eqs[i] = move(new_row);
            target[i] = mod3(target[i] - factor * target[row]);
        }

        ++row;
    }

    // Check consistency
    for (int i = 0; i < l; ++i) {
        if (eqs[i].empty() && target[i] != 0) {
            cout << "impossible\n";
            return 0;
        }
    }

    // Back-substitution
    for (int j = b - 1; j >= 0; --j) {
        if (where[j] == -1) {
            ans[j] = 0;
        } else {
            int sum = target[where[j]];
            for (auto [k, c] : eqs[where[j]]) {
                if (k != j) sum = mod3(sum - c * ans[k]);
            }
            ans[j] = sum;
        }
    }

    int total = accumulate(ans.begin(), ans.end(), 0);
    cout << total << '\n';
    return 0;
}
