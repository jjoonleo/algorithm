#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[5];
bool visited[5];

void dfs(int s);

int main(){
    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(4);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(0);
    adj[3].push_back(1);
    adj[4].push_back(2);

    for(int i = 0; i < 5; i++){
        visited[i] = false;
    }

    dfs(0);
    for(int i = 0; i < 5; i++){
        cout << visited[i] << "  ";
    }
}

void dfs(int s){
    if(visited[s]) return;

    visited[s] = true;
    
    for(auto u: adj[s]){
        
        printf("%d -> %d\n",s ,u);
        dfs(u);
    }
}