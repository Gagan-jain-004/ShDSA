// approach    first initialize a vector of visted name with false for all
// first push strt node to queue then pop it then push its neighbour and mark visited true then pop front print and then its neighbour ans so on till q get empty



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

        void bfs(){                      //TC =  O(V+E)    vertex+edge
            queue<int>q;
            vector<bool>vis(V,false);
            q.push(0);
            vis[0]=true;

            while(q.size()>0){
                int u = q.front();
                q.pop();
                cout<<u<<" ";

                list<int>neighbors = l[u];
                for(int v: neighbors){
                    if(!vis[v]){
                        vis[v]=true;
                        q.push(v);
                    }
                }
            }

            cout<<endl;
        }

};


int main() {

    Graph graph(7);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);
    graph.addEdge(5,6);


    graph.bfs();

    return 0;
}