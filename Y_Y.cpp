#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s;
    map<string,int> mp;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>s;
        if(mp[s] == 0)
            cout<<"OK"<<endl;
        else
            cout<<s<<mp[s]<<endl;
        mp[s]++;
    }

    return 0;
}
