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
        for(int i = 1; i <= l; i++)
            {
            cin >> w >> ans;
            m[w] = ans;
            }

        for(int i = 1; i <= n; i++)
        {
            cin >> w;
            if(m.find(w) != m.end())
                cout << m[w] << endl;
            else
            {
                int x = (int)w.size() - 1;
                if(x > 0 && w[x] == 'y' &&
                   w[x - 1] != 'a' && w[x - 1] != 'e' && w[x - 1] != 'i' &&
                   w[x - 1] != 'o' && w[x - 1] != 'u')
                {
                    w[x] = 'i';
                    cout << w << "es" << endl;
                }
             else if(w[x] == 'o' || w[x] == 's' || w[x] == 'x')
                    cout << w << "es" << endl;
             else if(x > 0 && w[x] == 'h' && (w[x - 1] == 'c' || w[x - 1] == 's'))
                    cout << w << "es" << endl;
             else cout << w << "s" << endl;
            }
        }
    }

    return 0;
}

