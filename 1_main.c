//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main() {
    float celsius = 0;
    printf("请输入摄氏度:");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 9 / 5 + 32;
    printf("请输出华氏温度: %.1f\n", fahrenheit);
    return 0;
}
