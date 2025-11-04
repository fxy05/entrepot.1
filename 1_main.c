//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main() {
    char arr[3][4];  // 每行最多3个字符 + 1个字符串结束符'\0'
    
    // 读取3行输入
    for (int i = 0; i < 3; i++) {
        scanf("%s", arr[i]);  // 读取一行字符串（不含空格和换行）
    }
    
    // 原样输出3行
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }
    
    return 0;
}
