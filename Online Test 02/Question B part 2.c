#include <stdio.h>
//function phototype
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

//main function
int main(){
  //declare a veriable
  int a;
  float b;

  //User input
  printf("Enter no of guests: ");
  scanf("%d",&a);

  printf("Enter charge per guest:  ");
  scanf("%f",&b);

  printf("Discount: %.2f\n",getDiscountPrice(a,b));
  printf("Amount to be paid: %.2f",getAmount (a,b,getDiscountPrice(a,b)));
  
  return 0;
  
}//end main function

//called function
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{ 
  float discountPrice;
  
  
  if(noOfGuests>200){

    discountPrice = ((noOfGuests*chargePerGuest))*10/100;
  }
  return discountPrice;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
  float discountPrice;
  float totalamount;
  
  discountPrice = getDiscountPrice(noOfGuests,chargePerGuest);

  totalamount = (noOfGuests*chargePerGuest- discountPrice ) ;

   return totalamount; 
   
}//end main function