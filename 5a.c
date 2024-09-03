#include <stdio.h>

int main(){
    int start , end = 1;

    printf("enter the value =");
    scanf("%d",&start);

    while  (start >= end)
    {
       if (start%2 !=0)
       {
        printf("%d\n",start);
       }
       start--;
    }
    
}