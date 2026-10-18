#include <iostream>
using namespace std;

int main() {
    int arr[] = {6, 7, 8, 9, 10, 11, 12, 15, 16, 17, 18, 19};

    int l = sizeof(arr) / sizeof(arr[0]);
    int dif = arr[0] - 0;

    for (int i = 0; i < l; i++) {
        if (arr[i] - i != dif) {
            while (dif < arr[i] - i) {
                cout << i + dif << " ";
                dif++;
            }
        }
    }

    return 0;
}