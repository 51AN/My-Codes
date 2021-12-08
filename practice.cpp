#include <bits/stdc++.h>
using namespace std;

int deciSion(string c)
{
    if(c=="yes")
        return 69;
    else if(c=="no")
        return 0;
}
void printSomething() 
{
    cout << "Suck my dick xoxo"<<endl<<"yes or no"<<endl;
    string decision;
    cin>>decision;
    int verdict;
    verdict=deciSion(decision);

    if(verdict==69)
        cout<<"I'm getting laid tonight";
    else
        cout<<"NEXT!!!";
}

int main() 
{
    printSomething();
   
   return 0;
}