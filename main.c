#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value for a: ");
    scanf("%d",&a);
    printf("Enter the value for b: ");
    scanf("%d",&b);
    printf("Before swapping a = %d\n",a);
    printf("Before swapping b = %d\n",b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swapping a = %d\n",a);
    printf("After swapping b = %d",b);
    return 0;
}









