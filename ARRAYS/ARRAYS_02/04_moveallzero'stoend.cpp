#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//maintain the order

//method1 BRUTE FORCE 
vector<int> method1(vector<int>&arr){
    vector<int>temp;
    int n=arr.size();

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int j=arr.size() - temp.size();

    for(int i = 0;i<temp.size();i++){
        arr.push_back(temp[i]);

    }
    for(int i=j;i<n;i++){
        arr.push_back(0);
    }
    return arr;
    
}


//method2 OPTIMIZED

vector<int> moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int lastNonZeroFoundAt = 0;

    // Shift all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[lastNonZeroFoundAt] = arr[i];
            lastNonZeroFoundAt++;
        }
    }

    // Fill the remaining positions with zeros
    for (int i = lastNonZeroFoundAt; i < n; i++) {
        arr[i] = 0;
    }

    return arr;
}

int main(){
    vector<int>arr={1,0,2,3,2,0,0,4,5,1};

    return 0;
}