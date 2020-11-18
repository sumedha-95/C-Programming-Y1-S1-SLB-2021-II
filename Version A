//**Version A**//
#include<stdio.h>
int main(void)
{
  //Identifly the variable
 int roomtype,numofDate;
 char accoBasis,rewardCard;
 float discount,amount,daypay,total;

 printf("Enter your room type:");//Enter room type 1,2 or 3
 scanf("%d",&roomtype);

  while(roomtype !=-1)
  {
    if(roomtype ==1 ||roomtype == 2||roomtype ==3)
    {
    
    printf("Enter your accommodation type (F/H):");
    scanf(" %c",&accoBasis);

    printf("Enter number of dates:");
    scanf("%d",&numofDate);

    printf("Enter your card type (G/S/B):");
    scanf(" %c",&rewardCard);
    //identification card type
    if(roomtype == 1)
    { if(accoBasis=='F')
        daypay = 25555.00;
      else if(accoBasis=='H')
        daypay = 17250.00;  
    }

    if(roomtype == 2)
    { if(accoBasis=='F')
        daypay = 17500.00;
      else if(accoBasis=='H')
        daypay = 12250.00;  
    }

    if(roomtype == 3)
    { if(accoBasis=='F')
        daypay = 9000.00;
      else if(accoBasis=='H')
        daypay = 7250.00;  
    }
    
    if(rewardCard=='G')
    {
      discount=12.5;
    }
    else if(rewardCard=='S')
    {
      discount=11.5;
    }
    else if(rewardCard=='B')
    {
      discount=9.5;
    }

    amount=(daypay*numofDate)*((100-discount)/100);
    printf("Amount(Rs):%.2f\n",amount);
 

    }
    else
    {
      printf("Invailde room type");
      break;

    }

    printf("\nEnter your room type:");
    scanf(" %d",&roomtype);
  }

  return 0;
}


