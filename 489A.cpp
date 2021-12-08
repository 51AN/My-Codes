#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int n, cnt=0;
    cin >> n;
    int a[n], s[n];
    vector<int>v1;
    vector<int>v2;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
    }

    sort(s, s + n);

    for (int i = 0; i < n; i++)
        if (a[i] != s[i])
            for (int j = i + 1; j < n; j++)
                if (a[j] == s[i])
                {
                    swap(a[i],a[j]);
                    v1.push_back(i),v2.push_back(j);
                    cnt++;
                    break;
                }

    cout << cnt << endl;

    for (int i = 0; i < cnt; i++)
        cout << v1[i] << " " << v2[i] << nl;
//     int n;
//     cin>>n;
//     vector<int>firstpos;
//     vector<int>secondpos;
//     vector<pair<int,int>>v;
//     int temp;
//     for(int i=0;i<n;i++)
//     {
//         cin>>temp;
//         v.push_back(make_pair(temp,i));
//     }
//     int cnt=0;
// for (int i = 0; i < n; ++i)
//         {

//             for (int j = i + 1; j < n; ++j)
//            {

//                 if (v[i].first > v[j].first)
//                 {

//                     int x =  v[i].first;
//                     v[i].first = v[j].first;
//                      v[j].first = x;
//                        cnt++;
//                        firstpos.push_back(v[i].second);
//                        secondpos.push_back(v[j].second);

//               }
            

//            }

//         }
//     cout<<cnt<<nl;
//     for(int i=0;i<firstpos.size();i++)
//     {
//         cout<<firstpos[i]<<" "<<secondpos[i]<<nl;
//     }

    ekdin_to_ferot_jetei_hobe;
}




