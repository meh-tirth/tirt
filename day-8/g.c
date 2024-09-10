#include <stdio.h>

void printPyramid(int n) {
    for (int i = 0; i < n; i++) {
       
        for (int j = i; j >= 0; j--) {
            printf("%c ", 'A' + j); 
        }
       
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPyramid(n);
   
}
