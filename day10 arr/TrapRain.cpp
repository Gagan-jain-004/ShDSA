// left right largest nikalke ush particular bar ka difference krlo min height wale sai btw left and right largest
// like buy ell stock  har bar ka left max or right max ki array bnalo fir min(leftmax,rightmax) - ush bar ki height give u the trap water of that bar 
// for leftmax[i] = max(leftmax[i-1],height[i-1]) in a loop 

#include<bits\stdc++.h>
using namespace std;


void trap(int *height,int n){
    int leftMax[n];
    leftMax[0]=height[0];
    for(int i=1;i<n;i++){
        leftMax[i]= max(leftMax[i-1],height[i-1]);
    }
    int RightMax[n];
    RightMax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        RightMax[i]= max(RightMax[i+1],height[i+1]);
    }
    int ans=0;
    for(int i=1;i<n;i++){
        int part=( min(leftMax[i],RightMax[i]) - height[i]);
        if(part>0) ans+=part;
    }
    cout<<ans;
}

int main(){

    int height[]={4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(height[0]);
    
    trap(height,n);

}