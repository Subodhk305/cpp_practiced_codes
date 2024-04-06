#include<iostream>
using namespace std;

void heapify(int a[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[largest]) {
        largest = l;
    }

    if (r < n && a[r] > a[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heap_sort(int a[], int n) {
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    // Perform heap sort
    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

void display(int P[], int n) {
    for (int I = 0; I < n; I++) {
        cout << P[I] << "\t";
    }
}

int main() {
    int a[] = {5, 23, 34, 26, 37, 45, 99, 98, 11, 12};
    int n = sizeof(a) / sizeof(a[0]);

    heap_sort(a, n);

    display(a, n);
    
    return 0;
}
