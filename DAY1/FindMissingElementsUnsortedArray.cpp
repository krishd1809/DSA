#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};

    int l = sizeof(arr) / sizeof(arr[0]);

    int maxVal = *max_element(arr, arr + l);
    int minVal = *min_element(arr, arr + l);

    int h[maxVal + 1] = {0};

    for (int i = 0; i < l; i++) {
        h[arr[i]]++;
    }

    cout << "Missing elements: ";
    for (int i = minVal; i <= maxVal; i++) {
        if (h[i] == 0) {
            cout << i << " ";
        }
    }

    return 0;
}