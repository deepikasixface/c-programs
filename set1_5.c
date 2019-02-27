#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,res,b[100],int=0;
char a[100];
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]=='I')
{
 b[i]=1;
 }
 elseif(a[i]=='V')
 {
  b[i]=5;
  }
  elseif(a[i]=='X')
  {
  b[i]=10;
  }
  elseif(a[i]=='L')
  {
   b[i]=50;
  }
  elseif(a[i]=='C')
  {
   b[i]=100;
   }
   elseif(a[i]=='D')
   {
    b[i]=500;
    }
    
