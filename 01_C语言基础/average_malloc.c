#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("请输入元素个数: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("输入的数量无效\n");
        return 1;
    }
    double *arr = (double *)malloc(n * sizeof(double));
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    double sum = 0.0;
    printf("请输入 %d 个数值:\n", n);
    for (int i = 0; i < n; i++) {
        printf("数值 [%d]: ", i + 1);
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    double average = sum / n;
    printf("平均值为: %.2f\n", average);
    free(arr);
    arr = NULL; 
    return 0;
}