// Push zeroes to the end of te array while maintaining the relative order of other elements
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n=9;
   
  for(int i=0;i<n-1;i++){
     
     bool flag =true; 
     for(int j=0;j<n-1-i;j++){
        if(arr[j]==0){
            swap(arr[j],arr[j+1]);
            flag = false;
        }
     }
     if(flag==true) break; 
    }
 for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
 }


   
}