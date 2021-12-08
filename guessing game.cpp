#include<bits/stdc++.h>
using namespace std;
int main()
{
    int correct_number =7;
    int guess_number;

    int guess_count=1;

    int guess_limit=3;
    int z=0;
    cout<<"Guess the lucky number!"<<endl;

    while(correct_number!=guess_number )
    {
        if(guess_count<=guess_limit)
        {
            cout<<"Enter a number: ";
            cin>>guess_number;
            if(guess_number!=correct_number&&guess_count<guess_limit)
                cout<<"Try Again!"<<endl;
            guess_count++;
        }
        else
        {
            z=1;
            break;
        }
    }

    if(z==0)
    cout<<"YOU WIN"<<endl;
    else if(z==1)
        cout<<"YOU LOSE"<<endl;


    return 0;
}
