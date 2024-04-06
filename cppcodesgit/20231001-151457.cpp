#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {3, 72, 9, 6, 8};

    cout << "Array elements are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Array after reversal:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

