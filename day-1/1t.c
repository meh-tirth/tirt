#include <stdio.h>

int main(){
    int x,y,answer;

  printf("Enter value of x =");
  scanf("%d", &x);

  printf("Enter value of y =");
  scanf("%d", &y);

  // (x+y)2
  answer =(x*x)+(2*x*y)+(y*y);

  printf("answer : %d",answer);


  
}