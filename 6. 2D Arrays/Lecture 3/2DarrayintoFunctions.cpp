#include<iostream>
using namespace std;
void change(int a[]){
 a[0]= 9;
}
 void change2D(int arr[3][3]){ // Giving size is necessary
    arr[0][0] = 100;
 }
int main(){
    // int a[3]= {1,2,3};
    // cout<< a[0]<< endl;
    // change(a);
    // cout<< a[0]<< endl;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    change2D(arr);
     cout<< arr[0][0]<< endl;
}