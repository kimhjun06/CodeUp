/*
  작은 따옴표(single quotation mark)가 들어있는
  특수한 형태의 출력문에 대한 연습을 해보자.
  printf() 함수로 따옴표 문자 '를 출력하기 위해서는
  \'로 입력해야 한다. \'는 작은 따롬표 문자 자체 출력
  \"는 큰 따옴표 문자 자체 출력. 작은 따옴표나
  큰 따옴표는 문자나 문장을 나타내기 위한 기호들로
  쓰이는데, 그렇게 쓰이는 의미가 아니라 따옴표
  그 자체를 표현해 주기 위해서이다.
*/

#include <stdio.h>
int main(int argc, char** argv) {
  printf("\'Hello\'");
  return 0;
}
