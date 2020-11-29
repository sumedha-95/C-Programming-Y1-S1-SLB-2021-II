//Online Exam  02 - Version D Part 02//

//including header file
#include <stdio.h>
//function phototype
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float
totalCost);

//main function
int main() {
  //declare variables
  int itemNo,quantity;
  float totalCost;
  //user input
  printf("Enter Item Number :");
  scanf("%d",&itemNo);
  //user input
  printf("Enter quantity :");
  scanf("%d",&quantity);
  puts("");

  //called function
  totalCost =calculateTotalCost(itemNo,quantity);
  
  //called printDetails
  printDetails(itemNo,quantity,totalCost);

  
  return 0;
}//end main function.
//called function
float calculateTotalCost(int itemNo, int quantity){
  float calculateTotalCost;
  switch(itemNo){
    case 1:
    calculateTotalCost = quantity *100;
    break;
    case 2:
    calculateTotalCost = quantity *200;
    break;
    case 3:
    calculateTotalCost = quantity *300;
    break;
  }//end switch
  return calculateTotalCost;//function return
}//end function 01
void printDetails(int itemNo, int quantity, float
totalCost){
 //checked the condition
  if(itemNo <=3){
    printf("Item Number :%d\n",itemNo);
    printf("Quantity :%d\n",quantity);
    printf("Total Coat :%.2f\n",totalCost);
  }
  else{
    printf("Invalide item number plz enter (1-3)");
  }
}//end function 02