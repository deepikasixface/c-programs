#include <stdio.h>
#include <conio.h>
void main ()
{ 
char a [100],x;
int i, j,count,max=0;
gets (a);
for (i=a; a [i]!='10'; i++)
{
count=0;
for(j=i+1; a[j]!='\0';j++)
{
if (a [i]==a [j])
{
count++;
}
}
if (count> max)
{
x=a [i];
max=count;
}
{
printf ("% c",x);
}
return 0;
}
}
