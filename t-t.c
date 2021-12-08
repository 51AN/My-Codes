#include <iostream>
#include <map>

using namespace std;

int main()
{
    int l, n;
    while(cin >> l >> n)
        {
        string w, ans;
        map<string, string> m;
        for(int i = 1; i <= l; i++) {
            cin >> w >> ans;
            m[w] = ans;
        }

        for(int i = 1; i <= n; i++) {
            cin >> w;
            if(m.find(w) != m.end()) cout << m[w] << endl;
            else {
                int end = (int)w.size() - 1;
                if(end > 0 && w[end] == 'y' &&
                        w[end - 1] != 'a' && w[end - 1] != 'e' && w[end - 1] != 'i' &&
                        w[end - 1] != 'o' && w[end - 1] != 'u') {
                    w[end] = 'i';
                    cout << w << "es" << endl;
                } else if(w[end] == 'o' || w[end] == 's' || w[end] == 'x') cout << w << "es" << endl;
                else if(end > 0 && w[end] == 'h' && (w[end - 1] == 'c' || w[end - 1] == 's'))
                    cout << w << "es" << endl;
                else cout << w << "s" << endl;
            }
        }
    }

    return 0;
}

