#include<stdio.h>
#include<conio.h>

void main(){
  int x=10;
  int *y=&x;
  printf("x=%d\n", x);// value of x
  printf("x=%d\n",&x);// address of x
  printf("y=%d\n", *y);// y=value of x
  printf("&y=%d", &y); //address of y
  getch();
}



