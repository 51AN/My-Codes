 #include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Sian Ashsad (Owner's name)."<<endl;
    string a;
    getline(cin,a);//using cin doesn't allow spaces.
    cout<<"The length of the string is: "<<a.length()<<endl;
    cout<<"The first character is: "<<a[0]<<endl;
    a[3]='m';
    cout<<"Changed string: "<<a<<endl;
    cout<<"Finding where Ashsad is in the string: "<<a.find("Ashsad",0)<<endl;//here the compiler attempts to find the given string in the parameter, the integer represents where to begin to search
    a[3]='n';
    cout<<"Taking a substring: "<<a.substr(0,4)<<endl;//takes a substring. In the parameter the first integer indicates the starting point, the second integer: how many characters to take from the starting point.
    string ss;
    ss = a.substr(5,6);
    cout<<"Taking a substring (2): "<<ss<<endl;



    return 0;
}
