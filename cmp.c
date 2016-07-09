#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,ce=0,i,j;
char c[50],d[60];
clrscr();
gets(c);
gets(d);
a=strlen(c);
b=strlen(d);
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
if(c[i]==d[j])
ce++;
}
}
if(ce>0)
{
printf("Strings are equal");
}
else
printf("strings are not equal");
getch();
}
