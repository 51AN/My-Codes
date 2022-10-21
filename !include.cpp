#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO  (ios::sync_with_stdio(0),cin.tie(0));
#define re                        return 0;
#define nl                                                "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i => 0 ; i --)
#define v(i)                                             vector<int>v[i];
#define sortv(a)                                         sort(a.begin(),a.end())
#define test(t)                                          ll t; cin>>t; while(t--)
#define YES                                              cout<<"YES"<<endl
#define NO                                               cout<<"NO"<<endl


using namespace std;



    priority_queue<int, vector<int>, greater<int> >upper;
    priority_queue<int>lower;


    void AddNum(int x){

        if(upper.size() == 0  && lower.size() == 0){
            upper.push(x);
        }
        else
     {    if(x>=upper.top()){
            upper.push(x);
        }
        else{
            lower.push(x);
        }
    }
        if(upper.size() - lower.size() > 1){
            int temp = 0;
            temp = upper.top();
            lower.push(temp);
            upper.pop();
        }
        else if(lower.size() - upper.size() > 1){
            int temp = 0;
            temp = lower.top();
            upper.push(temp);
            lower.pop();
        }


        
    }

    double FindMedian(){
        double median = 0;
        if(lower.size()>upper.size()){
            median = (double)lower.top();
        }
        else if(lower.size()<upper.size()){
            median = (double)upper.top();
        }
        else{
            median = (double)(((double)lower.top() + (double)upper.top())/(double)2.0);
        }
        return median;
    }



int main(){

    fastIO;

    

    AddNum(10);
    AddNum(12);
    AddNum(9);
    // cout<<FindMedian()<<nl;
    AddNum(8);
    // cout<<FindMedian()<<nl;

    cout<<lower.size()<<nl;
    cout<<upper.size()<<nl;

    while(lower.size()!=0){
        cout<<lower.top()<<nl;
        lower.pop();
    }
    while(upper.size()!=0){
        cout<<upper.top()<<nl;
        upper.pop();
    }



    re;

}