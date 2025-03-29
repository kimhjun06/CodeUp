/*
    유니코드 특수문자를 출력하는 연습을 해보자.
    CLI 명령어 입출력 화면에서 표나 그림을 그리기
    위해 사용되던 방법과 비슷하다.
*/

#include <stdio.h>
int main(int argc, char** argv) {
    printf("\u250C\u252C\u2510\n");
    printf("\u251C\u253C\u2524\n");
    printf("\u2514\u2534\u2518\n");
    return 0;
}

