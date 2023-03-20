//Time Complexity: O(n)
//Space Complexity: O(n)
#include <iostream>
#include <algorithm>
using namespace std;

void arrange(int a[], int n) {
    int negi = 0;
    int posi = n - 1;

    while (negi <= posi) {
        if (a[negi] < 0 && a[posi] < 0) {
            negi++;
        }
        else if (a[negi] > 0 && a[posi] < 0) {
            swap(a[negi], a[pos]);
            negi++;
            pos--;
        }
        else if (a[negi] > 0 && a[posi] > 0) posi--;
        else {
            negi++;
            posi--;
        }
    }
}
int main() {
    int n = 5;
    int arr[] = { 0, 2, 1, 2, 0 };
    arrange(arr, n);
    return 0;
}
