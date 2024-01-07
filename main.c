// cd libtest
// gcc -c src/libtest.c -I./include
// gcc -shared -o libtest.so libtest.o
// cd ..
// gcc -o main main.c -I./libtest/include -L./libtest -ltest
// LD_LIBRARY_PATH=./libtest ./main

// => 오브젝트 파일, 실행파일 만들 때는 include 경로 필요
// => 실행파일 만들 때는 현재 경로 기준 include 경로 필요
// => 실행파일 실행할 때는 라이브러리 경로 필요

#include <stdio.h>

#include "libtest.h"

int main(void)
{
    printf("%d\n", add(2, 3));
    return 0;
}