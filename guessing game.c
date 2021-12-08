#include<bits/stdc++.h>
int main()
{
    int correct_number =7;
    int guess_number;

    int guess_count;

    int guess_limit=3;

    while(correct_number!=guess_number )
    {
        if(guess_count<=guess_limit)
        {
            cin>>guess_number;
            guess_count++;
        }
        else
        {
            cout<<"LOST"<<endl;
            break;
        }
    }
    cout<<"YES"<<endl;


    return 0;
}
