/*
  실수 1개 입력받아 그대로 출력하기
  실수형(float)으로 변수를 선언하고 그 변수에 실수값을 저장한 후
  저장되어 있는 실수값을 출력해보자.
*/

#include <stdio.h>
int main(int argc, char** argv) {
  float x;
  scanf("%f\n", &x);
  printf("%f", x);
  return 0;
}
/*
  또는
*/
#include <stdio.h>
int main(int argc, char** argv) {
  double x;
  scnaf("%lf", &x);
  printf("%lf\n", x);
  return 0;
}
/*
  참고
  %f는 무저간 소수점 6자리까지 맞추는 서식 문자이다.
  만약 소수점 n자리까지 맞추고 싶다면 %.nf를 사용하면 된다.
  double 자료형이라면 %.nlf
*/
