/*
  정수 1개 입력받아 그대로 출력하
  정수형(int)으로 변수를 선언하고 변수에 정수값을 저장한 후
  변수에 저장되어 있는 값을 그대로 출력해보자.
*/

#include <stdio.h>
int main(int argc, char** argv) {
  int n; // 정수(integer) 값을 저장
  scanf("%d", &n); // 키보드로 입력되는 값을 10진수(decimal)로 읽어 변수 n에 저장
  printf("%d\n", n); // 변수 n에 저장되어 있는 값을 10진수(%d)로 출
  return 0;
}
