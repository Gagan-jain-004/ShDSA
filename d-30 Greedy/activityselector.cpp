// qsn select as max activity get performed
//greedy har ek stage pe comparison krte chlte jao till get global answer

// approach of this qsn  - end time ko sort krke , then compare coz minimal the end time more would be the free time for other activities



#include<bits/stdc++.h>
using namespace std;

int maxActivities(vector<int> start, vector<int>end){
    
    cout<<"selecting A0\n";
    int count = 1;
    int currEndTime = end[0];

    for(int i=1;i<=start.size();i++){
        if(start[i]>= currEndTime){      //non-overlapping
            cout<<"selecting A"<<i<<endl;
            count++;
            currEndTime= end[i];
        }
    }

    return count;
}



int main(){

    vector<int>start = {1,3,0,5,8,5};
    vector<int>end = {2,4,6,7,9,9};

    cout<<maxActivities(start,end)<<endl;

    return 0;
}

