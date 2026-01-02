#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

class Edge{
    public:
    int v;
    int wt;
    Edge(int v, int wt){
        this->v = v;
        this->wt = wt;
    }
};

int main(){
 int v=6;
 vector<vector<Edge>>g(v);
    g[0].push_back(Edge(1, 10));
    g[0].push_back(Edge(2, 15));
    g[1].push_back(Edge(3, 12));
    g[1].push_back(Edge(5, 15));
    g[2].push_back(Edge(4, 10));
    g[3].push_back(Edge(5, 2));
    g[4].push_back(Edge(5, 5));
    g[5].push_back(Edge(0, 5));

    return 0;
}