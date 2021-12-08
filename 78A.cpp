#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    char s1[101],s2[101],s3[101];
    int i=0,first=0,second=0,third=0;
    char c;
    while((c=getchar())!='\n')
    {
        s1[i]=c;
        i++;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            first++;
        }
    }
    i=0;
    while((c=getchar())!='\n')
    {
        s2[i]=c;
        i++;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            second++;
        }
    }
    i=0;
    while((c=getchar())!='\n')
    {
        s3[i]=c;
        i++;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            third++;
        }
    }
    
    if((first==5)&&(second==7)&&(third==5))
    {
        cout<<"YES"<<nl;
    }
    else
        cout<<"NO"<<nl;

    ekdin_to_ferot_jetei_hobe;
}
