#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int v;
    list<int>*l;
    public:
    Graph(int v){
        this->v=v;
        l=new list<int>[v];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int i=0;i<v;i++){
            cout<<i<<" :";
            for(int neighbour:l[i]){
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }

    
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.print();
}