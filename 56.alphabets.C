#include<stdio.h>
void main()
{
int i,c=0;
char a[10];
printf("\n enter the string:");
scanf("%s",&a[i]);
while(a[i]!='\0')
{
if(((a[i]>'a')&&(a[i]<'z'))||((a[i]>'A')&&(a[i]<'Z'))||((a[i]>'0')&&(a[i]<'9')))
{
c++;
}
}
if(c>=1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
