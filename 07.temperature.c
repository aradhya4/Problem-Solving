#include <stdio.h>
int main()
{
    int temp;
    printf("enter the temperature:");
    scanf("%d",&temp);
    
    if (temp<0)
    printf("extremely cold weather");
    else if (temp>=0 && temp<10)
    printf("freezing cold weather");
    else if (temp>=10 && temp<20)
    printf("cold weather");
    else if (temp>=20 && temp<30)
    printf("normal weather");
    else if (temp>=30 && temp<40)
    printf("hot weather");
    else
    printf("very hot weather");
}
