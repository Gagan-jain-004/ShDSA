
#include<bits/stdc++.h>
using namespace std;


//primary diagonal     i=j
//secondary diagonal  u will see elemnts  j=n-i-1  ;    n= no.of rows 

// dhyan rkh in case of odds like 3 * 3 centerone add twice so ovverall ans = primarysum + diagonalsum - common 
// so for it both  condition will holds for that common element so by above two condition  u can find valuw of i and j 



int diagonal(int mat[][4],int n){
    int sum =0;

    //o(n)
    for(int i=0;i<n;i++){
        sum += mat[i][i];

        if(i!= n-i-1) sum+= mat[i][n-i-1];
    }

    cout<<sum;





//  o(n^2)   
//  for(int  i=0;i<n;i++){
//         for(int j=0;j<n;j++){
            
//         if(i==j){
//             sum = sum + mat[i][j];
//         }else if(j== n-i-1){
//             sum = sum + mat[i][j];
//         }
//     }
// }
// cout<<sum;
}



int main(){
 int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    diagonal(matrix,4);

}