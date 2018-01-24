#include <stdio.h>
int main()
{
    double v1, v2, v3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &v1, &v2, &v3);

    if( v1>=v2 && v1>=v3 )
        printf("%.2f is the largest number.", v1);

    if( v2>=v1 && v2>=v3 )
        printf("%.2f is the largest number.", v2);

    if( v3>=v1 && v3>=v2 )
        printf("%.2f is the largest number.", v3);

    return 0;
}
