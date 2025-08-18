// heap implementation is not useful via class of node   due to tc so implemented via vector/array
// Heap is a complete BST (by default max heap(parent>child)) && node filling should be in left to right manner only 

/*
// for 0 based indexing 

  in heap to get child nodes index if u know parent index (say i ) then 
childs of it would have index 
for left child = 2i+1  and for right child = 2i+2

parent index form child idx     
let say child idx = x       then parent idx = (x-1)/2

*/
/*
// for 1 based indexing 

  in heap to get child nodes index if u know parent index (say i ) then 
childs of it would have index 
for left child = 2i and for right child = 2i+1

parent index form child idx     
let say child idx = x       then parent idx = x/2

*/




#include <bits/stdc++.h>
using namespace std;


class Heap{
  vector<int>vec; 
public:

void push(int val){    //O(logn)

  // step 1- insert the val in end 
  vec.push_back(val);

  // step-2 fix heap  
  int x = vec.size()-1;                 // accesing the index of new val added (childI)
  int parI = (x-1)/2;              // accessing parent of new val(childI)

  while(parI >=0 && vec[x]>vec[parI] ){
    swap(vec[x],vec[parI]);
    x= parI;
    parI= (x-1)/2;

  }

}

void heapify(int i){

  if(i>=vec.size())   return;

  int l = 2*i+1;
  int r = 2*i +2;

  int maxIdx = i;
  if(l<vec.size() && vec[l]>vec[maxIdx]){
    maxIdx =l;
  }

  if(r<vec.size() && vec[r]>vec[maxIdx]){
    maxIdx =l;
  }

  swap(vec[i],vec[maxIdx]);
  if(maxIdx != i){
    heapify(maxIdx);
  }

}

void pop(){
// step1 - swap with end index
  swap(vec[0],vec[vec.size()-1]);

  // step2 - now delete the last 
  vec.pop_back();

  // step3 - heapify
  heapify(0); 

}

int top(){
  return vec[0];   // highest priority element 
}

bool empty(){
  return vec.size()==0;
}


};


int main() {

Heap heap;
heap.push(50);
heap.push(10);
heap.push(100);

cout<<"top = "<<heap.top()<<endl;
heap.pop();
cout<<"top = "<<heap.top()<<endl;

    return 0;
}