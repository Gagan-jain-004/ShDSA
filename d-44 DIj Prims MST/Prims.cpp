//in Directed  graph

#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;                  // no. of nodes 
    list<pair<int,int>>*l;            // understand it as arr of list type    like we use int*arr ; so here l is array that contains list as element in each index 
                            //har nodes ki list ke adjacent ka starting point
    bool isUndir;

    public:
        Graph(int V,bool isUndir=true){
            this->V =V;
            l = new  list<pair<int,int>>[V];             // understand like  int*arr = new int[size];
           this->isUndir=isUndir;
        }

        void addEdge(int u,int v,int wt){
            l[u].push_back(make_pair(v,wt));
            if(isUndir)         // if from main we get false (mean they want directed graph so below wont work)
            l[v].push_back(make_pair(u,wt));
        }

      void primsAlgo(int src){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        vector<bool>mst(V,false);

        pq.push(make_pair(0,src));
        int ans=0;

        while(pq.size()>0){
            int u= pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            if(!mst[u]){
                mst[u]=true;
                ans+= wt;
                list<pair<int,int>>neighbors = l[u];
                for(pair<int,int>n: neighbors){
                    int v= n.first;
                    int currWt = n.second;
                    pq.push(make_pair(currWt,v));
                }
            }

        }
        cout<<"final cost = "<<ans<<endl;

      }


};


int main() {

    Graph graph(4);

    graph.addEdge(0,1,10);
    graph.addEdge(0,2,15);
    graph.addEdge(0,3,30);
    graph.addEdge(1,3,40);
    graph.addEdge(2,3,50);


    graph.primsAlgo(0);

    return 0;
}






 