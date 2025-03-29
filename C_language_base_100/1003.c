/*
  줄을 바꿔 출력하는 출력문을 연습해보자.
  백슬래시 문자 '\'는 'W'와 비슷한 원표시로
  보이기도 하지만 같은 문자이다. printf() 함수를
  이용해 문장을 출력할 때 줄을 바꾸기 위해서는
  '\n'(new line)을 줄을 바꿀 위치에 넣어야 한다.
  '\t'(tab), '\r'(carriage  return, 그 줄의 맨 앞으로 커서를 보냄)
  등이 있다. 이러한 문자를 이스케이프 문자라고
  하고 출력하는 문장 안에서의 원하는 형식에
  맞추어 출력할 수 있도록 줄을 바꾸는 등의 특별한
  의미들을 나타내기 위해 사용한다.
*/

#include <stdio.h>
int main(int argc, char** argv) {
  printf("Hello\n");
  printf("World\n");
  return 0;
}
