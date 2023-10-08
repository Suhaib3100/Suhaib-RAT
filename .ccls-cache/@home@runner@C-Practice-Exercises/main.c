/*Based on the percentage, we will print the division, if percentage is:

Greater than or equal to 60, division will be "First"
Greater than or equal to 50, division will be "Second"
Greater than or equal to 40, division will be "Third"
Less than it (we will not check any condition, it will be written in else), the result will be fail*/

#include<stdio.h>
int main()
{
    int Physics,Chemistry,Maths,Computer;
    int total;
    float percentage;

  printf("Enter Physics Marks\n");
      scanf("%d",&Physics);
  printf("Enter Chemistry Marks\n");
      scanf("%d",&Chemistry);
  printf("Enter Mathematics Marks\n");
      scanf("%d",&Maths);
    printf("Enter Computer Science Marks\n");
      scanf("%d",&Computer);

  total=Physics+Chemistry+Maths+Computer;
  percentage=(float) total*100/400;

  if(percentage>=60)
  {
      printf("Congrats You Are Passed with First Class and percentage is  '%f'",percentage);
    
    
  }
  else if (percentage>=50)
  {
     printf("Congrats You Are Passed with Second Class and percentage is  '%f %%'",percentage);
  }
  else 
  {
     printf("You are Failed babe");
  }

  return 0;
}