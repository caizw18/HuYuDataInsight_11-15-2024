#include <stdio.h>

int main()
{
    //交换值，要传变量的地址才行

    void swap(int* x, int* y){
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;

    }
    int a = 1;
    int b = 2;
    swap(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
