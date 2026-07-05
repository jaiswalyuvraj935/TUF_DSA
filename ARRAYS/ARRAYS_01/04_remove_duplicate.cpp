#include <iostream>
#include <vector>
#include <set>
using namespace std;

// method1 using set
vector<int> method1(vector<int> &arr)
{
    set<int> unique;

    for (int i = 0; i < arr.size(); i++)
    {
        unique.insert(arr[i]);
    }

    vector<int>result;
    for(auto it :unique){
        result.push_back(it);
    }

    return result;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 4, 3, 2, 1, 7, 7};
    vector<int>mainresult = method1(arr);
    for(auto s:mainresult){
        cout<< s;
    }
    return 0;
    
}