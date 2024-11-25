#include <stdio.h>

#define ROWS 3
#define COLS 3

// 函数声明，接受一个二维数组
void printArray(int arr[ROWS][COLS]);

int main() {
    // 定义并初始化一个3x3的二维数组
    int array[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 调用函数打印数组
    printArray(array);

    return 0;
}

// 函数定义
void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}