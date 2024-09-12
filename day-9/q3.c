#include<stdio.h>

int main(){
      for (int row = 1; row <= 5; row++) {
        for (int space = row; space >= 2; space--)
        {
            printf("  ");
        }
         for ( int col = row; col <=5; col++)
        if (col %2 == 0)
        {
           printf("0 ");
        }
        else{
            printf("1 ");
        }
        
        printf("\n");
    }
}