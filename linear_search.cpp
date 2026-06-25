#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;  // Found
        }
    }
    return -1;  // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int n = 5;

    int result = linearSearch(arr, n, key);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
