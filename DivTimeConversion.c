#include<stdio.h>
/*Divyaranjan Sahoo
Adding two time inputs*/
int main()
{
  int h1,m1,s1,h2,m2,s2,Hours,Mins,Secs;
  float a;
  printf("Enter the value of initital time in \n\nHours ~ ");
  scanf("%d",&h1);
  printf("Minutes ~ ");
  scanf("%d",&m1);
  printf("Seconds ~ ");
  scanf("%d",&s1);
  printf("\nEnter the value of second time in \nHours ~ ");
  scanf("%d",&h2);
  printf("Minutes ~ ");
  scanf("%d",&m2);
  printf("Seconds ~ ");
  scanf("%d",&s2);
  Secs = s1 + s2;
  Mins = m1 + m2 + (Secs/60);
  Hours = h1 + h2 + (Mins/60);
  Mins = Mins%60;
  Secs = Secs%60;
  printf("\nThe resultant time is %d hours %d minutes and %d seconds",Hours, Mins, Secs);
}
