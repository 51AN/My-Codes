#include<iostream>
using namespace std;


void user(string name, int age)
{
    cout<< "Hello "<<name<<endl;
    cout<<"You are "<<age<<" years old"<<endl;
}

int main()
{
    user("Asad",50);
    user("Nargis",48);
    user("Sian",20);

    return 0;
}
