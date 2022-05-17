#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;

void getPair(int a[],int *min,int *max, int n)
{
    if(a[0]<a[1])
    {
        *min = a[0];
        *max = a[1];

    }
    else
    {
        *min = a[1];
        *max = a[0];
    }
    
    for(int i = 2; i<n; i++)
    {
        if(*min>a[i])
        {
            *min = a[i];
        }

        else if(*max<a[i])
        {
            *max = a[i];
        }

    }



}

int main()
{

    int n;
    cout<<"Enter Size of Array"<<nl;
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements"<<nl;

    for(int i =0 ; i<n; i++)
    {
        cin>>a[i];
    }

    int min =0,max =0;

    getPair(a, &min, &max,n);
    cout<<"max ="<<max<<nl;
    cout<<"min ="<<min<<nl;


}
