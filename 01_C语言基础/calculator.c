#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;
    printf("请输入表达式 (例如: 12.5 + 4): ");
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("输入格式错误！\n");
        return 1;
    }
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("错误：除数不能为 0！\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("错误：不支持的运算符 '%c'\n", op);
            break;
    }
    return 0;
}