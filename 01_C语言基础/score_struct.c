#include <stdio.h>

#define MAX_STUDENTS 5
struct Student {
    char name[20]; // 姓名
    float score;   // 分数
};

int main() {
    int count = 0;
    struct Student report_card[MAX_STUDENTS]; 

    printf("请输入学生人数: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("\n请输入第 %d 个学生的姓名: ", i + 1);
        scanf("%s", report_card[i].name);
        printf("请输入第 %d 个学生的成绩: ", i + 1);
        scanf("%f", &report_card[i].score);
    }
    printf("%-15s %-10s\n", "姓名", "分数");
    for (int i = 0; i < count; i++) {
        printf("%-15s %-10.1f\n", report_card[i].name, report_card[i].score);
    }
    return 0;
}