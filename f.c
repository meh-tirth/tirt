#include <stdio.h>

int main(){
    int Maths,English,Science;
    float ans;
    printf("Enter Maths Marks : ");
    scanf("%d",&Maths);

    printf("Enter Englsih Marks : ");
    scanf("%d",&English);

    printf("Enter Science Marks : ");
    scanf("%d",&Science);

    if (Maths < 0 || English < 0 || Science < 0 || Maths > 100 || English > 100 || Science > 100)
    {
        printf("invalid marks");
    }
    else
    {
        ans = (Maths + English + Science) / 3;
        printf("Average Marks: %f",ans);
    }




}