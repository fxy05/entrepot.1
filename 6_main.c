//202510304222
//fxy05.07.26@qq.com
//王鑫


#include <stdio.h>
#include <stdlib.h>  // 包含malloc、free

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));  // 动态申请内存
    // 输入数据
    for (int i = 0; i < 5; i++) {
        scanf("%d", arr + i);
    }
    // 打印数据
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    free(arr);  // 释放内存，避免泄漏
    arr = NULL;  // 避免野指针
    return 0;
}
