#include <stdio.h>
int main()
{
    float x,y;
    printf("enter the X coordinate: ");
    scanf("%f",&x);
    printf("enter the Y coordinate: ");
    scanf("%f",&y);

    if (x>0 && y>0) {
    printf("coordinates lies in first quadrant");
     } else if (x<0 && y>0) {
    printf("coordinates lies in second quadrant");
     }else if (x<0 && y<0) {
    printf("coordinates lies in third quadrant");
     } else if(x>0 && y<0) {
    printf("coordinates lies in fourth quadrant");
     } else if(x==0 && y==0) {
     printf("coordinates lies on origin");
     } else if (x==0) {
     printf("coordinates lies on x-axis");
     } else if (y==0) {
     printf("coordinates lies on y-axis");
     }
}