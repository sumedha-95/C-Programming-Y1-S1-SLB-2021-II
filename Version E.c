#include <stdio.h>

int main(void)
{
  char instype,famOrind,x;
  float family,individual,total,numChildren;
  do
  {
    printf("Enter your insurance type(A,N,D,S):");
    scanf(" %c",&instype);

    if(instype=='A'||instype=='N'||instype=='D'||instype=='S')
    {
      printf("Family or Individual:");
      scanf(" %c",&famOrind);

      printf("Number of children:");
      scanf("%f",&numChildren);

      if(instype=='A')
    {
      if(famOrind=='F')
        family=5200.00;
        else if(famOrind=='I')
          individual=4500.00; 
    }
    if(instype=='N')
    {
      if(famOrind=='F')
        family=4300.00;
          else if(famOrind=='I')
            individual=3100.00;
            
    }
    if(instype=='D')
    {
      if(famOrind=='F')
        family=4800.00;
          else if(famOrind=='I')
            individual=3600.00;
    }
    if(instype=='S')
    {
      if(famOrind=='F')
        family=3800.00;
          else if(famOrind=='I')
            individual=3300.00;
    }

      if(famOrind=='F')
      {
        if(numChildren<=2)
        {
          printf("Total Amount:%.2f\n",family);
        }
        else if(numChildren>2)
        {
          family=family+(family*(((numChildren-2)*10)/100));
          printf("Total Amount:%.2f\n",family);
        }
      }
      else if(famOrind=='I')
      {
        printf("Total Amount:%.2f\n",individual);
      }

    }
    else 
    {
      printf("Invalid Insurance Type\n");
      break;
    }

   printf("Do you want to countinue:");
   scanf(" %c\n",&x);

  }while(x=='y'||x=='Y');

  return 0;
}
