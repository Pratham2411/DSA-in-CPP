// Given an array of n integers. Find range of integer 'k' such that by replacing each and every element by |ai-k| i[1,n]
// results in a sorted array. Else return -1.

#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;
float max(float a, float b){
    if(a>b) return a;
    else return b;
}
float min(float a, float b){
    if(a<b) return a;
    else return b;
}
int main(){
      int arr[]={5,3,10};
      int n=3;
     float kmin = (float)(INT_MIN);
     float kmax = (float)(INT_MAX);
     bool flag = true;
    for(int i=0;i<n-1;i++){

        if(arr[i]>=arr[i+1]){
            kmin= max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{
            kmax= min(kmax,(arr[i]+arr[i+1])/2.0);
        }
         if(kmin>kmax){
        flag = false;
        break;
    }
    }
   if(flag==false) cout<< -1;
   else if(kmin==kmax){
    if(kmin-(int)kmin==0){
        cout<<"Only posible value of k is : "<<kmin;
    }
   }
   else{
    if(kmin-(int)kmin>0) kmin=(int)kmin +1;
    cout<<"Range of k is : {"<<kmin<<","<<(int)kmax<<"}";
   }

}