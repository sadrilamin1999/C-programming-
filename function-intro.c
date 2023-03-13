#include<stdio.h>

int main(){
  int result = get_sum(10,12);
  printf("%d", result);
  return 0;
}
int get_sum(int x,int y){
  int sum = x+y;
  return sum;
}

