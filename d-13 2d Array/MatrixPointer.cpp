#include <bits/stdc++.h>
using namespace  std;



int main(){
 int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7,8},
        {9,10,11,12},
        {13,14,15,16},
    };

    cout<<mat<<"= "<<&mat[0][0]<<endl;     //it points to the first row 
    cout<<mat+1<<endl;              // points to next row 
    cout<<mat+1 << " != "<<&mat[0][1]<<endl;
    cout<<mat+1 << " = "<<&mat[1][0]<<endl;  //points to second row 
    
}  


// ptr[i][j] = *(*(ptr+i)+j)