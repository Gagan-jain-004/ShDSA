//in Directed  graph
// kahan's algo is topological sort using bfs but it helps to check whether cycle exist or not

// inorder is incoming arrows to node 
// a DAG graph has at least one vertex with indegree  0  and atleast one vertex with out degree 0


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

        void calcIndegree(vector<int>indeg){
            for(int u=0;u<V;u++){
                list<int>neighbors= l[u];
                for(int v:neighbors){
                    indeg[v]++;
                }
            }
        }

        void topoSort2(){        //kahn's algo
            vector<int>indeg(V,0);
            calcIndegree(indeg);
            queue<int>q;

            //0 indeg nodes -> starting point 
            for(int i=0;i<V;i++){
                if(indeg[i]==0) q.push(i);
            }

            while(q.size()>0){
                int curr = q.front();
                q.pop();
                cout<<curr<<" ";

                list<int>neighbors = l[curr];
                for(int v: neighbors){
                    indeg[v]--;
                    if(indeg[v]==0){
                        q.push(v);
                    }
                }


            }
         cout<<endl;   
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
    
     
    graph.topoSort2();

    return 0;
}






 