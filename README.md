# shared_lib_test

공유 라이브러리를 생성하고 실행하는 테스트이다.

아래 순서대로 명령어를 입력하여 진행한다.

    cd libtest
    gcc -c src/libtest.c -I./include
    gcc -shared -o libtest.so libtest.o
    cd ..
    gcc -o main main.c -I./libtest/include -L./libtest -ltest
    LD_LIBRARY_PATH=./libtest ./main

* 오브젝트 파일, 실행파일 만들 때는 include 경로 필요

* 실행파일 만들 때는 현재 경로 기준 include 경로 필요

* 실행파일 실행할 때는 라이브러리 경로 필요

# Rererence

키워드 : 공유 라이브러리 만들기

<https://m.blog.naver.com/muri1004/221202776906>
