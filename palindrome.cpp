#include<bits/stdc++.h>
using namespace std;

int palindrome(int x)
{
    int rem,rev=0;
    int n=x;
    while(x)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    if(rev==n)
        return 1;
    else  
        return 0;
}

int main()
{
    int n;
    cin>>n;

    if(palindrome(n))
        cout<<n<<" is a palindrome"<<endl;
    else
        cout<<n<<" is NOT a palindrome";
    
    }