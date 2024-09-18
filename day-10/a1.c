#include <stdio.h>

int main (){
    int user;

    printf("Enter Array Size :");
    scanf("%d",&user);

    int a[user];
    for ( int i = 0; i < user; i++)
    {
        printf("Enter Array Elements a [%d]:" ,i);
        scanf("%d",&a[i]);
    }
    printf("Length Of An Array: %d\n",user);
    
}