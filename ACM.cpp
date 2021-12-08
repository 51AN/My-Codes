#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    

    //////////////////////////////////////  for loop with auto //////////////////////////////////


    // int a[10]={1,2,3,4,5,6,7,8,9,10};

    // for(auto u:a)  // works as same as for loop. but has les flexibility.
    // {
    //     cout<<u<<" ";
    // }
 
 //////////////////////////////////////////////  vector  //////////////////////////////
    // vector<int>v;

    // v.push_back(10);
    // v.push_back(15);

    // // v.pop_back();
    // // v.erase(v.begin(),v.begin()+1);  

    // for(auto u:v)
    // {
    //     cout<<u<<" ";
    // }
    // vector<int>num(3);//this indicates the size

    // for(auto &i:num)//use this reference to input
    // {
    //     cin>>i;
    // }
    // for(auto u:num)
    // {
    //     cout<<u<<" ";
    // }


//////////////////////////////////////////////// map //////////////////////////////////////

    // map<string,int>mp;

    // mp["Sian"]=10;

    // //cout<<mp["Hello"];   will produce 0 here.

    // if(mp.find("Nafis")==mp.end())
    //     cout<<"NOT EXIST";
    // else cout<<"EXIST"<<nl;



    // // for(int i=0;i<mp.size();i++)
    // // {
    // //     cout<<mp[i].first<<" "<<mp[i].second;
    // // }

    // map<string, vector<int>>pm;

    // for(auto p:pm)
    // {
    //     cout<<p.first<<" ";
    //     for(auto m:p.second)
    //     {
    //         cout<<m<<" ";
    //     }

    // }


    // unordered_map<string, double>ump;  // doesn't make a tree but a hashtable, order of one entry and exit. Unlike map which will be logN compledxity. Con: hash collision

    // ump["Hi"] = 2.0;

    // ump["World"] = 7.3;

    // for(auto u:ump)
    // {
    //     cout<<u.first<<" "<<u.second<<nl;
    // }


//////////////////////////// deque (double ended queue or queue + stack )/////////////////////////

    // deque<int>d;
    // d.push_front(69);
    // d.push_back(45);
    // d.push_back(85);
    // d.push_back(55);

    // d.erase(d.begin(),d.begin()-1);           ////// remeber this
   

    // for(auto u : d)
    // {
    //     cout<<u<<" ";
    // }



//////////////////////////////// list //////////////////////////////

    // list<int>l;

    // l.push_back(2);
    // l.push_front(3);
    // l.push_back(5);

    // l.pop_front();


    // for(auto u:l)
    // {
    //     cout<<u<<" ";
    // }

////////////////////////// stack ///////////////////////////////////

    // stack<string> s;
    // s.push("Ashsad");
    // s.push("Sian");
    // s.push("idiot");

    // s.pop();

    // cout<<s.top()<<nl;

    // stack is like a stack of plates, the last one in will be the first one out.


/////////////////////////// Queue ///////////////////////////////

    //opposite of stack, first come, first serve.

    // queue<long>q;

    // q.push(69);
    // q.push(51);
    // q.push(6);

    
    
    // q.pop();



    // cout<<q.front()<<nl;

    
////////////////////////// Pair ///////////////////////////////////////
    
    
    // pair<int,int>p;

    // cin>>p.first>>p.second;
    // cout<<p.first<<p.second;

    // pair<int,vector<int>>pv;

    // cin>>pv.first;
    // int x;
    // cin>>x;

    // pv.second.push_back(x);

    
    //in vector the complexity is order of n, however in queue, dqueue or stack it is order of 1


    ////////////////////////////////// priority_queue ///////////////////////////////////////////

    //basically auto sorts the values which have been inputed 

    priority_queue<int>pq;

    pq.push(10);
    pq.push(12);
    pq.push(9);
    //12 10 9
    cout<<pq.top()<<nl; //12

    pq.pop(); //10 9

    cout<<pq.top()<<nl; //10

    pq.push(50); // 50 10 9

    cout<<pq.top()<<nl; // 50


    

    ekdin_to_ferot_jetei_hobe;
}
