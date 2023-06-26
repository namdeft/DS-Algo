#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int size) {
    int curr, j;

    for (int i = 1; i < size; i++) {
        curr = arr[i];
        j = i - 1;

        while (curr < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = curr;
    }
}

int main() {
    vector<int> arr = {3, 2, 10, 5, 8, 4, 7};

    insertionSort(arr, arr.size());

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}