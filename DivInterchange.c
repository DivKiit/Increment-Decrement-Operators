#include<stdio.h>
/*Divyaranjan Sahoo
Interchangin digits*/
int main(void)
{
  int a,b,c,d,e,Num,Res;
  printf("Enter the five digit number here ~ ");
  scanf("%d",&Num);
  a=Num/10000;
  b=Num/1000-(a*10);
  c=Num/100-(a*100)-(b*10);
  d=Num/10-(a*1000)-(b*100)-(c*10);
  e=Num%10;
  Res=(10000*e)+(1000*c)+(100*b)+(10*d)+a;
  printf("The initital number was %d ",Num);
  printf("\nThe final resultant after interchanging digits is %d\n",Res);
}
