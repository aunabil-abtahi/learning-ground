#include<stdio.h>
int main() {
    int n, pos, val;
    scanf("%d", &n);
    int arr[n+1]; // Declare an array with size n+1 to accommodate the new element
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    // Shift elements to the right from the position
    scanf("%d %d", &pos, &val);
    for(int i=n; i>=pos+1; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = val; // Insert the new value at the specified position

    for(int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
