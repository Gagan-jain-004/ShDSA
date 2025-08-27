//in undirected graph

//BFS based solution

#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;                  // no. of nodes 
    list<int>*l;            // understand it as arr of list type    like we use int*arr ; so here l is array that contains list as element in each index 
                            //har nodes ki list ke adjacent ka starting point
    

    public:
        Graph(int V){
            this->V =V;
            l = new list<int>[V];             // understand like  int*arr = new int[size];
           
        }

        void addEdge(int u,int v){
            l[u].push_back(v);
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






        bool isBipartite(){
            queue<int>q;
            vector<bool>vis(V,false);
            vector<int>color(V,-1);

            q.push(0);
            color[0]=0;

            while(q.size()>0){
                int curr= q.front();
                q.pop();
                list<int>neighbors = l[curr];

                for(int v: neighbors){
                    if(!vis[v]){
                        vis[v]= true;
                        color[v] =!color[curr];
                        q.push(v);
                    }else{
                        if(color[v]== color[curr]){
                            return false;
                        }
                    }
                }

            }
            return true;

        }

};


int main() {

    //undirected bipartite graph
    int V=4;

    Graph graph(V);


    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    
    

   cout<<graph.isBipartite()<<endl;
    
    

    return 0;
}