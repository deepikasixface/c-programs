#include<stdio.h>
#include<conio.h>
void main() 
{
char a[100];
int i,l;
scanf("%s",a);
l=strlen(a);
for(i=l-1;i>=0;i--) 
{
printf ("%c",a[i]);
}
getch();
}
