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




        bool undirCycleHelper(int src,int par,vector<bool>&vis){
            vis[src] = true;
            list<int>neighbors= l[src];

            for(int v: neighbors){
                if(!vis[v]){

                    if(undirCycleHelper(v,src,vis)){
                        return true;
                    }
                }
                else{
                    if(v!= par){   // itmeans cycle exist 
                        return true;
                    }
                }
            }
            return false;
        }
        
        bool isCycleUndir(){
            vector<bool>vis(V,false);
            return undirCycleHelper(0,-1,vis);
        }


        bool dirCycleHelper(int src,vector<bool>&vis,vector<bool>&recPath){
            vis[src]=true;
            recPath[src] =true;
            list<int>neighbors = l[src];

            for(int v:neighbors){
                if(!vis[v]){
                    if(dirCycleHelper(v,vis,recPath)){
                        return true;
                    }
                }else{
                    if(recPath[v]){
                        return true;
                    }
                }
            }
            recPath[src]= false;
            return false;
        }



        bool isCycleDir(){
            vector<bool>vis(V,false);
            vector<bool>recPath(V,false);
            for(int i=0;i<V;i++){
                if(!vis[i]){
                    if(dirCycleHelper(i,vis,recPath)){
                        return true;
                    }
                }
            }
            return false;
        }


};


int main() {

    int V=4;

    Graph graph(V,false);      //passing false coz i want directed graph


    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);
    

   cout<<graph.isCycleDir()<<endl;
    
    

    return 0;
}






 