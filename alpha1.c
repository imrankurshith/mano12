#include <stdio.h>
int main()
{
char v;
printf("Enter a character: ");
scanf("%c",&v);
if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
printf("%c is an alphabet.",v);
else
printf("%c is not an alphabet.",v);
return 0;
}
