#include <bits/stdc++.h>

using namespace std;

// at least O(n^2) time complexity
//
//

void bubbleSort(int *arr, int len)
{
    // do sth
    int tmp;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len-1; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}


int main(void)
{
    int n;
    cin >> n;
    // vector<int> v(1000, 0);    // initialize size 1000 with value 0
    int *arr = (int *)malloc(10000 * sizeof(int));
    cout << "bubble sort before:\t";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubbleSort(arr, n);
    cout << "bubble sort after:\t";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
