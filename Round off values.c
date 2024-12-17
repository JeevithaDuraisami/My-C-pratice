#include<stdio.h>
#include<math.h>

int main()
{
    float n;
    printf("enter a float value");
    scanf("%f",&n);
    printf("%d\n",(int)n);
    printf("%.1f\n",ceil(n));
    printf("%.1f\n",floor(n));
    return 0;
}
