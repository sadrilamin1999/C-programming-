#include <stdio.h>

void subFunc();
void nestedFunc();

int main(){
  subFunc();
  return 0;
}
void subFunc(){
  printf("I am sub function.\n");
  nestedFunc();
}
void nestedFunc(){
  printf("I am nested function.\n");
}

