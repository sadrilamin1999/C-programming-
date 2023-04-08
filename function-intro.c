#include<stdfix.h>

int main(){
  int my_sum = get_sum(10,20);
  printf("Sum= %d\n", my_sum);

  int my_sub = get_sub(30,15);
  printf("Sub= %d\n", my_sub);

  int my_into = get_into(5,12);
  printf("Into= %d\n", my_into);

  int my_division= get_division(84,8);
  printf("Division= %d\n", my_division);

  return 0;
}
int x,y;
int get_sum(x, y){
  int sum = x+y;

  return sum;
}
int get_sub(x,y){
  int sub = x-y;

  return sub;
}
int get_into(x,y){
  int into = x*y;

  return into;
}
int get_division(x,y){
  int division = x/y;

  return division;
}
