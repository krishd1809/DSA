#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            int j = i + 1;

            while (j < n && arr[j] == arr[i]) {
                j++;
            }

            cout << arr[i] << " : " << (j - i) << endl;
            i = j - 1;
        }
    }

    return 0;
}