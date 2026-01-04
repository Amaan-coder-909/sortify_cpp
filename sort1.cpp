#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nUnique elements are:\n";
    for(int i = 0; i < n; i++) {
        if(i == n - 1 || arr[i] != arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

