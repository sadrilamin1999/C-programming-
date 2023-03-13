#include<stdio.h>

int main(){
  int a,b,c;
  printf("Write value for a, b and c \n");
  scanf("%d%d%d", &a,&b,&c);
  int aver= (a+b+c)/3;
  printf("The average is=%d\n", a);
  printf("The average is=%d\n", b);
  printf("The average is=%d\n", c);
  printf("The average is=%d\n", aver);

  return 0;
}
