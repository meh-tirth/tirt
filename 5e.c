#include<stdio.h>

int main(){

    int start,end;

    printf("Enter Your Value =>");
    scanf("%d",&start);
    

    printf("Enter Your Value =>");
    scanf("%d",&end);

    while (start <= end)
    {
        if (start%4 == 0)
        {
            printf("%d\n",start);
        }
        start++;
    }
    

}