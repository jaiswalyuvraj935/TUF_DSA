#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>A={1,2,3,4,4,5,6,};
    vector<int>B={2,3,3,5,6,};
    int i=0;
    int j=0;
    vector<int>result;
    while(i<A.size() && j<B.size()){
        if(A[i]<B[j]){
            i++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else{
            result.push_back(A[i]);
            i++;
            j++;
        }
    }

    for(auto it :result){
        cout<<it;
    }
    return 0;
}