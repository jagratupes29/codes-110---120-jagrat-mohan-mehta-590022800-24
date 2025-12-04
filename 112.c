#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0], currMax = arr[0];
    for (int i = 1; i < n; i++) {
        if (currMax + arr[i] > arr[i])
            currMax += arr[i];
        else
            currMax = arr[i];

        if (currMax > maxSoFar)
            maxSoFar = currMax;
    }

    printf("Maximum subarray sum: %d\n", maxSoFar);
    return 0;
}
