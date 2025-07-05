// searching in sorted matrix 

// approach top right corner sai compare krke direction pakad lo 
// comparison of key with top right element that starts with mat[0][m-1]      m is no. of cols

// if cell == key    found 
//  cell < key       down  means row++
// cell  > key        left means  col--


// while(row<n && c >=0)




#include<bits/stdc++.h>
using namespace std;

bool search(int mat[][4],int n,int m,int key){

    int row = 0;
    int col=m-1;
    while(row<n && col>=0){

        if(key==mat[row][col]){
            return true;
        }
        
        else if(key<mat[row][col]){
            col--;
        }
        else if(key>mat[row][col]){
            row++;
        }
    }
    return false;
}

int main(){

     int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

  int ans=  search(matrix,4,4,12);
  cout<<ans;
}