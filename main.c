#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int n;
    printf("Len: ");
    scanf("%d", &n);

    printf("Enter the sorted array: ");
    int arr[50];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Index of: ");
    int m;
    scanf("%d", &m);

    printf("is %d\n", binary_search(arr, 0, n - 1, m)); 
}
