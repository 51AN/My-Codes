#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i => 0 ; i --)
#define fb1(i,n)                                         for(int i = n ; i > 0 ; i --)
#define INT_MAX                                          2147483647
#define INT_MIN                                          -2147483647 - 1
#define v(i)                                             vector<int>v[i];

using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];

        int max = 0 , min = 2147483647;
        int maxi,mini;

        f(i,n)
        {
            cin>>a[i];
            
            max = __max(a[i], max);

            min = __min(a[i], min);
        } 

        

        f(i,n){
            if(a[i] == max){
                maxi = i + 1;
            }
            if(a[i] ==  min){
                mini = i + 1;
            }
        }

        int maxiRight = n - maxi + 1;
        int miniRight = n - mini + 1;

        int case1,case2,case3;

        case1 = __max(maxi, mini);
        case2 = __max(maxiRight, miniRight);

        case3 = __min((maxi + miniRight) , (maxiRight + mini));

        cout<<__min(case2,__min(case1, case3))<<nl;



        



    }
    ekdin_to_ferot_jetei_hobe;
}
