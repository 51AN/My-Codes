#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"

using namespace std;
int main() {
	// your code goes here
    int t;
    cin>>t;

    while(t--)
    {
        stack<char>st;
        string s;
        cin>>s;
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '<')
            {
                st.push(s[i]);
                
            }
            
            if(s[i] == '>')
            {
                if(st.top() == '<')
                    {
                        st.pop();
                        count += 2;
                    }
                else
                {
                    continue;
                }
            }
        }
        
            cout<<count;
    }
	
	
	
	return 0;
}
