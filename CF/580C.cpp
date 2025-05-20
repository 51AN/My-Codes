#include<bits/stdc++.h>
#define ll                                               long long int
#define fastIO                                           (ios::sync_with_stdio(0),cin.tie(0));
#define re                                               return 0;
#define nl                                               "\n"
#define f(i,n)                                           for(int i = 0 ; i < n ; i ++)
#define f1(i,n)                                          for(int i = 1 ; i <= n ; i ++)
#define fb(i,n)                                          for(int i = n - 1 ; i >= 0 ; i --)
#define v(i)                                             vector<int>v[i];
#define sortv(a)                                         sort(a.begin(),a.end())
#define test(t)                                          ll t; cin>>t; while(t--)
#define YES                                              cout<<"YES"<<endl
#define NO                                               cout<<"NO"<<endl

using namespace std;    

int n, m;
vector<int> cats;
vector<vector<int>> adj;
int result = 0;

void dfs(int node, int visited[], int catsCnt){
    visited[node] = 1;
    if(cats[node] == 1){
        catsCnt++;
    } else {
        catsCnt = 0;
    }
    if(catsCnt > m){
        return;
    }
    bool isLeaf = true;
    for(int i = 0; i < adj[node].size(); i++){
        if(visited[adj[node][i]] == 0){
            isLeaf = false;
            dfs(adj[node][i], visited, catsCnt);
        }
    }
    if(isLeaf){
        result++;
    }
}

int main(){
    cin >> n >> m;
    cats.resize(n + 1);
    adj.resize(n + 1);
    int visited[n + 1] = {0};
    f1(i, n){
        cin >> cats[i];
    }
    f(i, n - 1){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, visited, 0);

    cout << result << nl;
    re;
}