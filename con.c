#include <stdio.h>
#include< conio.h>
 void main()
{
  int Num, Reminder, Count=0;
  printf("\n Please Enter any number\n");
  scanf("%d", &Num);
  while(Num > 0)
  {
     Num = Num / 10;
     Count = Count + 1;  
  }
  printf("\n Number of Digits in a Given Number = %d", Count);
  getch ();
}
