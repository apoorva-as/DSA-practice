                                
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//count digit-------------------------

// //Function to count the number
// //of digits in an integer 'n'.

// int countDigits(int n){
// //     // Initialize a counter variable
// //     // 'cnt' to store the count of digits.

//     int cnt = 0;
//     // While loop iterates until 'n'
//     // becomes 0 (no more digits left).

//     while(n > 0){
//         // Increment the counter
//         // for each digit encountered.
//         int lastdigit = n%10;
//         cnt = cnt + 1;
//         // Divide 'n' by 10 to
//         // remove the last digit.
//         n = n / 10;
//     }

//     // Return the
//     // count of digits.
//     return cnt;
// }



// int main() {
//     int N = 329823;
//     cout << "N: "<< N << endl;
//     int digits = countDigits(N);
//     cout << "Number of Digits in N: "<< digits << endl;
//     return 0;
// }



                                
//   int main(){
//     int n;
//     cin>>n;
//     int cnt=0;
//     while (n>0)
//     {
//         n=n/10;
//         cnt=cnt+1;
//     }
//     cout<<cnt<<endl;
//   }                          

        
        
//reverse number-------------
// int main(){
// int n;
// cin>>n;
// int revnum=0;
// while (n>0)
// {
//     int id=n%10;
//     n=n/10;
//     revnum = (revnum *10)+id;
// }
// cout<<revnum;
// }

//pelindrop number----------------

// int main(){
// int n;
// cin>>n;
// int revnum=0;
// int dup=n;//there we make new int because if we take n it will become zero after completing the loop
// while (n>0)
// {
//     int id=n%10;
//     n=n/10;
//     revnum = (revnum *10)+id;
// }
// if (dup==revnum)
// {
//     cout<<"true"<<endl;
// }
// else cout<<"false";

// }

//anustrum number--------

// int main(){
// int n;
// cin>>n;
// int sum=0;
// int dup=n;
// while (n>0)
// {
//     int id=n%10;
//     n=n/10;
//     sum=sum+(id*id*id);
//     }
// if (dup==sum){
//     cout<<"true";
// }
// else cout<<"false";
// }




//factor----------
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         if(n%i==0){
//         cout<<i<<" ";
//         }
//     }
// }

int main(){
    int n;
    cin>> n;
    for(int i = 1;i<=sqrt(n);i++){
        if (n%i==0){
            cout<<i<<" ";
        }

        if((n/i)!= i){
            cout<<(n/i)<<" ";
        }
    }
}


//prime----------------
// int main(){
//     int n;
//     int cun;
//     cun=0;
//     cin>>n;
//     for (int i = 2; i <= n; i++)
//     {
//         if (n%i==0)
//         {
//             cun=cun+1;
//         }
//     }
//         if (cun==1)
//         {
//             cout<<"true";
//         }
//         else cout<<"false";
        
    
    
// }

//repeart number again and again by recursion------------------------

// void f(int i,int n){

// if (i>n)
// return;
// cout<<"apoorva"<<endl;
// f(i+1,n);



// }
// int main(){
//     int n;
//     cin>>n;
//     f(1,n);
// }

// void f(int i,int n){

// if (i<1)
// return;
// cout<<i<<endl;
// f(i-1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     f(n,n);
// }

//here we cant use  i+1 to write counting so we use i-1 to write -----------------

// void f(int i,int n){
// if (i<1)
// return;
// f(i-1,n);
// cout<<i<<endl;

// }
// int main(){
//     int n;
//     cin>>n;
//     f(n,n);
// }

//sum of first n number----------

//  void f(int i, int sum){
// if (i<1)
// {
//     cout<<sum;
//     return;
// }
// f(i-1,sum+i);

// }
// int main(){
//     int n;
//     cin>>n;
//     f(n,0);
// }


// int factorial(int X) {
//    int ans = 1;
//    for (int i = 1; i <= X; i++) {
//       ans = ans * i;
//    }
//    return ans;
// }
// int main() {
//    int X = 5;
//    int result = factorial(X);
//    cout << "The factorial of " << X << " is " << result;
// }


// int factorial(int n){
   
//    // Base Condition.
//    if(n == 0)
//    {
//        return 1;
//    }

//    // Problem broken down into 2 parts and then combined.
//    return n * factorial(n-1);

// }

// int main(){
  
//   // Here, let’s take the value of n to be 3.
//   int n = 3;
//   cout<<factorial(n)<<endl;
//   return 0;
// }

//Function to print array---------------------------------

// void printArray(int arr[], int n) {
//    cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
// }
// //Function to reverse array 
// void reverseArray(int arr[], int n) {
//    int p1 = 0, p2 = n - 1;
//    while (p1 < p2) {
//       swap(arr[p1], arr[p2]);
//       p1++; p2--;
//    }
//    printArray(arr, n);
// }
// int main() {
//    int n = 5;
//    int arr[] = { 5, 4, 3, 2, 1};
//    reverseArray(arr, n);
//    return 0;
// }

//  //Function to print array-------------------
// void printArray(int arr[], int n) {
//    cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
// }


// //Function to reverse array using recursion
// void reverseArray(int arr[], int start, int end) {
//    if (start < end) {
//       swap(arr[start], arr[end]);
//       reverseArray(arr, start + 1, end - 1);
//    }
// }
// int main() {
//    int n = 5;
//    int arr[] = { 5, 4, 3, 2, 1 };
//    reverseArray(arr, 0, n - 1);
//    printArray(arr, n);
//    return 0;
// }

// bool palindrome(int i, string& s){
    
//     // Base Condition
//     // If i exceeds half of the string means all the elements 
//     // are compared, we return true.
//     if(i>=s.length()/2) return true;
    
//     // If the start is not equal to the end, not the palindrome.
//     if(s[i]!=s[s.length()-i-1]) return false;
    
//     // If both characters are the same, increment i and check start+1 and end-1.
//     return palindrome(i+1,s);
// }

// int main() {
	
// 	// Example string.
// 	string s = "madam";
// 	cout<<palindrome(0,s);
// 	cout<<endl;
// 	return 0;
// }

// int fibonacci(int N){
   
//    // Base Condition.
//    if(N <= 1)
//    {
//        return N;
//    }

//    // Problem broken down into 2 functional calls
//    // and their results combined and returned.
//    int last = fibonacci(N-1);
//    int slast = fibonacci(N-2);
   
//    return last + slast;

// }

// int main(){
  
//   // Here, let’s take the value of N to be 4.
//   int N = 4;
//   cout<<fibonacci(N)<<endl;
//   return 0;

// }