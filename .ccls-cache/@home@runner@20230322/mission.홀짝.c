// 하나의 정수를 입력받아 홀수면 "홀수입니다."를, 짝수면 "짝수입니다."를 출력하는 프로그래밍을 작성하시오.
#include <stdio.h>
main(){
  int x;
  scanf("%d", &x); // 정수 입력받기
  if(x%2==0){
    printf("짝수입니다");
  }
  else {
    printf("홀수입니다");
  }
}