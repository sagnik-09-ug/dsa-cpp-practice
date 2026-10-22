#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int sz) {
    int start = 0, end = sz - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = 7;

    reverse(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}