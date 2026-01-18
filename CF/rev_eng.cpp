#include <iostream>
#include <string>
using namespace std;


const int secret_value = 42;

int compute(int x);
bool check_password(const string& input);
void print_flag();
int helper(int x);

int compute(int x) {
    return x * secret_value + helper(x);
}

int helper(int x) {
    return (x % 3 == 0) ? 7 : 3;
}

bool check_password(const string& input) {
    return input == "open_sesame";
}

void print_flag() {
    cout << "[FLAG] Congrats! You've unlocked the hidden path." << endl;
}

int main() {
    int input;
    string pass;

    cout << "Enter a number: ";
    cin >> input;

    int result = compute(input);
    cout << "Computed result: " << result << endl;

    cout << "Enter the secret password: ";
    cin >> pass;

    if (check_password(pass)) {
        if (result == 171) {
            print_flag();
        } else {
            cout << "Password correct, but result mismatch!" << endl;
        }
    } else {
        cout << "Wrong password!" << endl;
    }

    return 0;
}
