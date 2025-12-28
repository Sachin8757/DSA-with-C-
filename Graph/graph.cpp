#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    int v;
    list<int>*l;//int *arr;
    public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];

    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList(){
        for(int i=0;i<v;i++){
            cout<<i<<" : ";
            for(auto node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }

    //BFS
    void bfs(){
        queue<int>q;
        vector<bool>vis(v,false);
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int Nodedata=q.front();
            q.pop();
            cout<<Nodedata<<" ";
            for(auto nbr:l[Nodedata]){
                if(!vis[nbr]){
                    q.push(nbr);
                    vis[nbr]=true;
                }
            }
        }
    }

    //DFS
    void dfsHelper(int nodedata,vector<bool>&vis){
        cout<<nodedata<<" ";
        vis[nodedata]=true;
        for(auto nbr:l[nodedata]){
            if(!vis[nbr]){
                dfsHelper(nbr,vis);
            }
        }
    }
    void dfs(){
        vector<bool>vis(v,false);
        dfsHelper(0,vis);
    }

};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.dfs();
    return 0;
}