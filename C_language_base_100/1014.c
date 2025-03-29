/*
  2개의 문자(ASCII CODE)를 입력받아 순서를 바꿔 출력해보자
*/

#include <studio.h>
int main(int argc, char** argv) {
  char x, y;
  scanf("%c %c", &x, &y);
  printf("%c %c", y, x);
  return 0;
}
