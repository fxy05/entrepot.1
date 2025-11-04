//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>
void reverseArray(int arr[], int length) {
    int left = 0;
    int right = length - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    return 0;
}
