#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,12,34,56,78,90};
    int key = 90;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            cout<<"key found at index"<<i;
            break;
        }
    }
    return 0;
}