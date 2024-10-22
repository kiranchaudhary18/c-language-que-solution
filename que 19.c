



#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (is_sorted(arr, n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
   
    