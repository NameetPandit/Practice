#include <iostream>
#include <cmath>
using namespace std;

int partition(int arr[], int low, int high) {
    int i = low, j = high;
    int pivot = arr[low];

    while (i < j) {
        do {
            i++;
        } while (i < high && arr[i] < pivot);
        do {
            j--;
        } while (j > low && arr[j] > pivot);

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quick_sort(arr, low, p);
        quick_sort(arr, p + 1, high);
    }
}

int main() {
    int arr[] = {57, 19, 76, 38};
    int size = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, size);

    cout << "The quickly sorted array is:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}

