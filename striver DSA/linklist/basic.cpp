#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){
    // vector<int> arr ={1,2,3,4,5};
    // Node* y= new Node(arr[0], nullptr); //address pointer
    // cout<<y;

    //  vector<int> arr ={1,2,3,4,5};
    // Node y=  Node(arr[0], nullptr); //address pointer
    // cout<<y.next;
    //   cout<<y.data;

    //    vector<int> arr ={1,2,3,4,5};
    // Node* y= new Node(arr[0], nullptr); 
    // cout<<y -> data;


        vector<int> arr ={1,2,3,4,5};
    Node* y= new Node(arr[0]);     //here we remove nullptr as we define in public
    cout<<y -> data;
}