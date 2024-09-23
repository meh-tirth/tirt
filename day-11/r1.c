#include<stdio.h>

int main(){

    int rowsize,colsize,sum = 0,size;
    float avg = sum;

    printf("Enter The rowsize : ");
    scanf("%d",&rowsize);
    printf("Enter The colsize : ");
    scanf("%d",&colsize);

    size = rowsize*colsize;

    int box[rowsize][colsize];

    for ( int row = 0; row < rowsize; row++)
    {
        for ( int col = 0; col < colsize; col++)
        {
            printf("box[%d][%d] = ", row,col);
            scanf("%d",&box[row][col]);
        }     
    }
    for ( int row = 0; row < rowsize; row++)
    {
        for ( int col = 0; col < colsize; col++)
        {
           sum = sum + box[row][col];

        }
      
        
    }
    

     avg = (float)sum/size;
        printf("AVG OF BOX = %.2f",avg);
 
}