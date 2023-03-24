#include <stdio.h>
int countOccurrences(int arr[], int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 3, 5, 3, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 3;
    int count = countOccurrences(arr, n, num);
    printf("The number of occurrences of %d in the array is %d", num, count);
    
    return 0;
}