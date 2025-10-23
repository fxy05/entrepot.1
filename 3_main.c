//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main() {
    int a, b;
    char operator;
    
    // 输入两个整数和一个运算符
    printf("请输入两个整数和一个运算符（格式：a b operator）：");
    scanf("%d %d %c", &a, &b, &operator);
    
    // 根据运算符计算结果
    switch(operator) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            // 题目说明仅处理除数不为0的情况
            printf("%d\n", a / b);
            break;
        default:
            printf("无效的运算符！\n");
            break;
    }
    
    return 0;
}
