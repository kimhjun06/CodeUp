/*
  특수문자 출력을 연습해보자.
  % 기호가 앞에 붙는 문자를
  형식 지정자(format specifier)라고
  하며 그 위치에서 지정한 형식으로
  값을 출력해준다. 따라서 퍼센트 문자
  %를 출력하기 위해서는 %%로
  출력해 주어야 한다.
*/
#include <stdio.h>
int main(int argc, char** argv) {
  printf("\"!@#$%%^&*()\"");
  return 0;
}

/*
  다른 방식으로는
*/
#include <stdio.h>
int main(int argc, char** argv) {
  char arr[20] = "\"!@#$%^&*()\"";
  printf("%s", arr);
  return 0;
}
