#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int arr[]={2,400,1,5,9,90};
    int n = sizeof(arr) / sizeof(arr[0]);
   int largest = arr[0];
    for (  int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    cout << "Largest element is: " << largest << endl;
    return 0;
    
}