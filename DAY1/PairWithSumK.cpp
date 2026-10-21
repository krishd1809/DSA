#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {6,3,8,10,16,7,5,2,9,14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout << "Enter Target: ";
    cin >> k;

    int max_val = *max_element(arr, arr + n);

    int h[max_val + 1] = {0};

    for (int i = 0; i < n; i++) {
        int complement = k - arr[i];

        if (complement >= 0 && complement <= max_val &&
            h[complement] != 0) {
            cout << arr[i] << " + "
                 << complement << " = "
                 << k << endl;
        }

        h[arr[i]]++;
    }

    return 0;
}