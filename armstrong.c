#include<stdio.h>
int main()
{
int n,a.b,c=0;
printf("Enter the number");
scanf("%d",&n);
a=n;
while(a!=n)
{
b=a%10;
c+=b*b*b;
a/=10;
}
if(c==n)
{
printf("%d is a armstrong number",n);
}
else
{
printf("%d is not a armstrong number",n);
}
return 0;
}

