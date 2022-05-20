#include<stdio.h>
/*Divyaranjan Sahoo
Using pre++ for mid digit increment*/
int main()
{
  int Num,a=1,DivVar;
  printf("Enter the number here ~ ");
  scanf("%d",&Num );
  DivVar = Num+++a*10;
  printf("\n%d\n",DivVar);
  return 0;
}
