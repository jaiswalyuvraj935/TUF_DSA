#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 1, 5, 1, 2};

    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
}