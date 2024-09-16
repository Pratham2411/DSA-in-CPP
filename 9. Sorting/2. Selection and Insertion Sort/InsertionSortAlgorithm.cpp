#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    // Insertion algorithm O(n^2) , O(n) in best case
    
    for(int i=1;i<n;i++){
        int j=i;
        while(arr[j]<arr[j-1]&&j>=1){
            swap(arr[j],arr[j-1]);
            j--;
        }
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //  else{
        //     swap(arr[j],arr[j-1]);
        //     j--;
        //  }       
        // }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    // Stability: It is stable
}
