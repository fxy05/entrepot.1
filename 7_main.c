//202510304222
//fxy05.07.26@qq.com
//王鑫

#include <stdio.h>

// 数组反转函数
void reverse_array(int arr[], int length) {
    int temp;
    for (int i = 0; i < length / 2; i++) {
        temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    // 调用反转函数
    reverse_array(arr, 5);
    
    // 输出反转后的数组
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            printf("%d", arr[i]);
        } else {
            printf(" %d", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}
