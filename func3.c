#include <stdio.h>

//函数先声明再使用

int twice(int);

int main(int num)
{
    return twice(num);
}

int twice(int num){

    return 2 * num;
}