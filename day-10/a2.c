#include <stdio.h>

int main (){
    int user;
    float sum = 0;

    printf("Enter Array Size :");
    scanf("%d",&user);

    int a[user];
    for ( int i = 0; i < user; i++)
    {
        
        printf("Enter Array Elements a [%d]:" ,i);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("Average Of An Array: %.2f\n",sum /user);

   
    
}