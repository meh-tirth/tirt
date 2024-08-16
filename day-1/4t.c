#include <stdio.h>

int main(){
    int x,y,answer;

  printf("Enter value of x =");
  scanf("%d", &x);

  printf("Enter value of y =");
  scanf("%d", &y);

  // (x+y)3
  answer =(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);

  printf("answer : %d",answer);


  
}