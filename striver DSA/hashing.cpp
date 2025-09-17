// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int hashh[10000000]={0};//we can run it globally also for more cover ths 13
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//    // int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hashh[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hashh[number] << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// const int N = 1e7 + 10;    // For hash array
// const int MAX_N = 1e6 + 5; // For input array size
// int hashh[N] = {0};
// int arr[MAX_N];

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         hashh[arr[i]]++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         cout << hashh[number] << endl;
//     }

//     return 0;
// }


//ASCII value hashing

// int main() {

//     string s;
//     cin >> s;

//     //precompute:
//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c - 'a'] << endl;
//     }
//     return 0;
// }

////printing through stl map--------------------------

// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         mp[arr[i]]++;
//     }

//     // iterate over the map:
//     //  for(auto it : mp){
//     //         cout << it.first << "->" << it.second << endl;
//     //     }
    

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetch:
//         cout << mpp[number] << endl;
//     }
//     return 0;
// }

//without mapp------------
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     cin>>a[i];
    
    
//     int ma = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ma= max(ma,a[i]);
//     }
    
//     int freq[ma+1]={0};
//     for (int i = 0; i < n; i++)
//     {
//        freq[a[i]]++;
//     }
    
// for (int i = 0; i < n; i++)
// {
//    if(freq[i]!=0){
//     cout<<i<<"->"<<freq[i]<<endl;
//    }
// }

// }