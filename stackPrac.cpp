#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{
    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    stack<int>s1;
    stack<int>s2;

    s1.push(5);
    s1.push(7);
    s1.push(6);
    s1.push(4);


    s2.push(1);
    s2.push(5);
    s2.push(2);
    s2.push(0);
    s2.push(7);
    s2.push(8);

    s1.swap(s2);


    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }

    ekdin_to_ferot_jetei_hobe;
}