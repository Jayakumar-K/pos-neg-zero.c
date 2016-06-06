# pos-neg-zero.c
checking number is positive or negative or zero
#include<stdio.h>
main()
{
int n;
scanf("%d",&n);
if(n>0)
 {
 printf("positive");
}
  else if(n<0)
   {
  printf("negative");
}
    else
    {
  printf("zero");
}
}
