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


