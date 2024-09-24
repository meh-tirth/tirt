#include<stdio.h>

int main(){

    int size;

    printf("Enter the array's size ");
    scanf("%d",&size);

    int box[size];
    for (int col = 0; col < size; col++)
    {
        printf("a[%d] = ",col);
        scanf("%d",&box[col]);
    }
    for (int col = 0; col < size; col++)
    {
       if (box[col] < 0)
       {
        printf("Negative elements from an Array %d\n",box[col]);
       }
        
    }
   
    
}