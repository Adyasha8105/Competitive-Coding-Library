#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 200};
    int n = sizeof(arr) / sizeof(int);
    //Search in a sorted array

    int key;
    cin >> key;
    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }
    // get the index of that element
    auto lb = lower_bound(arr, arr + n, 40);
    cout << (lb - arr) << endl;

    auto ub = upper_bound(arr, arr + n, 40);
    cout << (ub - arr) << endl;

    cout << "occ of 40 is " << (ub - lb) << endl;
    return 0;
}
