#include<bits/stdc++.h> //includes all header files #must_include


using namespace std; //includes standard input output #must_include


int main()
{

    int n;

    cin>>n; // scanf simplified

    cout<<n; // printf simplified

    string s; // character array simplified. you can iterate through it by using loop s[i]
    s = "nameless";
    cout<<" hello there "<<"my name is "<<s<<"!!!"<<endl;//endl is new line (\n)
    //output : hello there my name is nameless!!!



   int a[5] = {1, 4, 2, 5, 3};

   sort(a, a+5);//ascending order sort.

   sort(a , a+5 , greater<int>()); //descending order sort.

   return 0;
}