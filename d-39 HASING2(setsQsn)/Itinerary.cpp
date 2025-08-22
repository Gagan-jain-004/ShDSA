// plane ticket  Pairs<from,to>

// chennai->bengaluru
//mumbai->delhi
//goa->chennai
//delhi->goa


// starting point is jahaan par hum kahin sai aa nhi skte (like mumbai) 
// so  starting point is = that exist in 'from' not on 'to'
// to  pehla start  mumbai ban jayega to fir agla start delhi and so on  



#include <bits/stdc++.h>
using namespace std;


void printItinerary(unordered_map<string,string>tickets){

    //Starting point
    unordered_set<string>to;
    
    for(pair<string,string>ticket : tickets){   //<from,to>
        to.insert(ticket.second);
        
    }
    
    string start="";
    for(pair<string,string>ticket: tickets){
        if(to.find(ticket.first) == to.end()){   //matlab nhi milne par yeh conditn true hogi to uska nikalo
            start= ticket.first;

        }
    }

    //Plan Print
    cout<<start<<" -> ";
    while(tickets.count(start)){        // start next pe shift hota rhega jaise hei bengaluru aayega to tickets[bengaluru] nhi hai value toh loop end 
        cout<<tickets[start]<<" -> ";
        start= tickets[start];
    }
    cout<<"destination\n";

}
int main() {

unordered_map<string,string>tickets;
tickets["Chennai"]="Bengaluru";
tickets["Mumbai"] = "Delhi";
tickets["Goa"]="Chennai";
tickets["Delhi"]="Goa";



    return 0;
}