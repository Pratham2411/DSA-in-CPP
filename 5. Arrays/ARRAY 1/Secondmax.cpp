#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << " Enter size of Array  :";
    cin>> n;
    int arr[n];
    // input

 cout<< " Enter Elements :" ;  
 for(int i=0; i<=n-1;i++){
    cin>>arr[i];
}
int max = -1e9;
for(int i=0; i<=n-1;i++){
    if(max<arr[i]) max = arr[i];
    
}
int Smax = INT_MIN;
for(int i=0; i<=n-1;i++){
    if(Smax<arr[i] && arr[i]!= max) Smax = arr[i];
    
}
cout << Smax;


}
