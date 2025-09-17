#include<iostream>
using namespace std;

//bubble sorting---------------
// int main(){
//     int arr[] ={5,10,1,4,2,3,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n-1;i++) //no of pass
//     {
//         for (int j = 0; j < n-1-i; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }

// minimum value and there index value---

// int main(){
//     int arr[] ={5,10,1,4,2,3,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mn = INT8_MAX; //mimum value
//     int mindx = -1;
//     for (int i = 0; i < n-1;i++) //no of pass
//     {  if (mn>arr[i])
//     {
//         mn=arr[i];
//         mindx=i;
//     }
//     }
//     cout<<mn<<" "<<mindx;
// }
    


//selection sorting-----------------

// int main(){
//     int arr[] ={5,10,1,4,2,3,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n-1;i++) //no of pass
//     {  
//         int mn = INT8_MAX;
//         int mindx = -1;
//         for (int j = i; j < n; j++)
//         {
//             if (mn>arr[j])
//             {
//                mn=arr[j];
//                mindx = j;
//             }
            
//         }
//         //swaping ith and mindx element
//         swap(arr[i],arr[mindx]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }


//insertion sorting------------

int main(){
    int arr[] ={5,10,1,4,2,3,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1;i++) //no of pass
    { 
        int j=i+1;
        while (j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
}