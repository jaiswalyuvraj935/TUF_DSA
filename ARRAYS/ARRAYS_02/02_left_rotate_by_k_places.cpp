#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// left rotate by k places let k=3

// method1
vector<int> method1(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    vector<int> storing;
    for (int i = 0; i < k; i++)
    {
        storing.push_back(arr[i]);
    }

    for (int i = k; i < arr.size(); i++)
    {
        arr[i - k] = arr[i];
    }
    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        arr[i] = storing[j++];
    }

    
    return arr;
}

//method 2 using cpp stl

vector<int> method2(vector<int>&arr, int k){

    rotate(arr.begin(), arr.begin() + k, arr.end());
    return arr;


}

int main()
{
    int k = 3;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 3, 4};
    vector<int>result = method1(arr, k);
    for (auto it : result)
    {
        cout << it;
    }
    

    return 0;
}