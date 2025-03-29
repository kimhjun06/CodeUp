/*
  윈도우 운영체제의 파일 경로를 출력하는 연습을 해보자.
  파일 경로에는 특수문자들이 포함된다.
  printf() 함수로 백슬래시 문자 \를 출력하기 위해서는
  \\로 출력해야 한다.
*/

#include <stdio.h>
int main(int argc, char** argv) {
  printf("\"C:\\Download\\hello.cpp\"");
  return 0;
}
