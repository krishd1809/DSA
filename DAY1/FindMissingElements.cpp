#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};

    int size = sizeof(arr) / sizeof(arr[0]); // 9 elements
    int n = size + 1; // Original array should have 10 elements

    int actualSum = n * (n + 1) / 2;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "Missing element is: " << actualSum - sum << endl;

    return 0;
}