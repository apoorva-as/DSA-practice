#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// int main(){
//     int arr[]={2,4,1,5,89,90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//    int largest = arr[0];
//     for (  int i = 0; i < n; i++)
//     {
//         if (arr[i]>largest)
//         {
//             largest=arr[i];
//         }

//     }
//     int slargest = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>slargest && arr[i]!= largest)
//         {
//               slargest= arr[i];
//         }

//     }

//     cout << "second Largest element is: " << slargest << endl;
//     return 0;

// }








int main()
{
    int arr[] = {2, 4, 1, 5, 89, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int slargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
            slargest=largest;
        }
        else if (arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
          
    }
    cout << "second Largest element is: " << slargest << endl;
    return 0;

}