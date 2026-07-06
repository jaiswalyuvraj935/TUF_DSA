#include<iostream>
#include<vector>
using namespace std;

// LEFT ROTATE BY ONE PLACE

int main(){
    vector<int>arr={1, 2, 3, 4, 5};
    int temp=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1]=arr[i];
    }
    int n= arr.size();
    arr[n-1]=temp;
    for(auto it: arr){
        cout<<it;
    }
    return 0;
}
