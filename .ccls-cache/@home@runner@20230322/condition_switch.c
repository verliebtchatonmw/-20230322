#include <stdio.h>
main(){
  int x;
  printf("무슨 과일을 좋아하시나요?\n");
  printf("사과:1, 키위:2, 복숭아:3, 수박:4, 없음:5\n");
  scanf("%d", &x);
  
switch(x){
case 1:
  printf("사과를 좋아하는군요!\n");
  break;
case 2:
  printf("키위를 좋아하는군요!\n");
  break;
case 3:
  printf("복숭아를 좋아하는군요!\n");
  break;
case 4:
  printf("수박을 좋아하는군요!\n");
  break;
case 5:
  printf("당신은 아마도 과일을 좋아하지 않는군요!\n");
  break;
default:
  printf("오류입니다. 프로그램을 다시 실행하세요.\n");
}
  printf("좋아하는 과일 조사 끝");
}