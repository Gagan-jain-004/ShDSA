//in Directed  graph

#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;                  // no. of nodes 
    list<int>*l;            // understand it as arr of list type    like we use int*arr ; so here l is array that contains list as element in each index 
                            //har nodes ki list ke adjacent ka starting point
    bool isUndir;

    public:
        Graph(int V,bool isUndir=true){
            this->V =V;
            l = new list<int>[V];             // understand like  int*arr = new int[size];
           this->isUndir=isUndir;
        }

        void addEdge(int u,int v){
            l[u].push_back(v);
            if(isUndir)         // if from main we get false (mean they want directed graph so below wont work)
            l[v].push_back(u);
        }

        void print(){
            for(int u=0;u<V;u++){            //Iterates over each node u from 0 to V-1.     and u know each node of l array is list
                list<int>neighbors = l[u];    //  Makes a copy of the neighbor list for u
                cout<<u<<" : ";
                for(int v : neighbors){
                    cout<<v<<" ";
                }
                cout<<endl;
            }
        }

void topoHelper(int src,vector<bool>&vis,stack<int>&s){

    vis[src]=true;

    list<int>neighbor = l[src];

    for(int v: neighbor){
        if(!vis[src]) {
            topoHelper(v,vis,s);
        }

    }
    s.push(src);
}

void topoSort(){
    vector<bool>vis(V,false);
    stack<int>s;

    for(int i=0; i<V;i++){
        if(!vis[i]){
            topoHelper(i,vis,s);
        }
    }
// print topological order

while(s.size()>0){
    cout<<s.top()<<" ";
    s.pop();
}

}


     
        
};


int main() {

    //DAG

    Graph graph(6,false);      //passing false coz i want directed graph

 
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);
    
     
    graph.topoSort();

    return 0;
}






 