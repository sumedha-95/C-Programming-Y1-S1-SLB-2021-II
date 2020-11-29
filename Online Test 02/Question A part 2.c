#include <stdio.h>

//function phototype
float calcIncrement(float salary, int noofYearsWorked);
float calcTotSalary(float salary, float increment);

//main function
int main()
{   //declare a veriable
    float salary;
    int y;
    printf("Enter Salary :");
    scanf("%f",&salary);

    printf("Enter no of years worked:");
    scanf("%d",&y);
    //call function 01
    printf("Increment: %.2f\n",calcIncrement(salary,y));
    //call function 02
    printf("Total Salary : %.2f\n",calcTotSalary(salary,calcIncrement(salary,y)));

    return 0;
}//end main function

//called function
float calcIncrement(float salary, int noofYearsWorked){
   float increment;
   if(noofYearsWorked>2){
     increment=(salary*10/100)*(noofYearsWorked-2);
   }
   return increment;
}
float calcTotSalary(float salary, float increment){
  return salary+increment;
}
