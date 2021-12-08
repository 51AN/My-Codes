#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
    {
			string s;
            cin>>s;
			int begin,end,flag=0;
			for(int i=0;i<s.length()-1;i++)
            {
				if(s[i]>s[i+1])
				{
					begin=i+1;
					end=i+2;
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"YES"<<endl;
				cout<<begin<<" "<<end<<endl;
			}
			else if(flag==0)
			{
				cout<<"NO"<<endl;
			}
	}
}
