// There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:
// Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
// Paste: You can paste the characters which are copied last time.
// Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.
// Example 1:
// Input: n = 3
// Output: 3
// Explanation: Initially, we have one character 'A'.
// In step 1, we use Copy All operation.
// In step 2, we use Paste operation to get 'AA'.
// In step 3, we use Paste operation to get 'AAA'.

// class Solution {
// public:
//  bool isPrime(int n){
//     if(n==1) return false;
//    for(int i =2;i<=sqrt(n);i++){ // Optimised O(root n)
//     if(n%i==0) return false;
//    }
//    return true;
// }

//   int gd(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return n/ i;
//     }
//     return 1;
//   }
//     int minSteps(int n) {
//     // prime no: Ans = n copy once then paste
//     // 2^n me 2*n operations lagenge
//     // Any other no : Prime factors nikal lo aur baki upar wale case
//    // Find highest factor of n :n/h.f operations
//    int count =0;
//    while(n>1){
//     if(isPrime(n)) {
//         count+=n;
//         break;
//     }
//     int hf = gd(n);
//     count+= n/hf;
//     n = hf;
//    }
//   return count;
//     }
// };