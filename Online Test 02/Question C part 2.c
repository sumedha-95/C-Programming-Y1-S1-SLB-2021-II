//Online exam Version C part 02//
#include<stdio.h>

//function phototype
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

//main function
int main(){
  int grade;
  float hrsWorked, salary;

  printf("Grade :");
  scanf("%d",&grade);
  printf("Hours Worked :");
  scanf("%f",&hrsWorked);
  
  //function call
  salary = calculateWeeklySalary(grade,hrsWorked);
 
  puts(""); //new line

  //function call
  printDetails(grade,hrsWorked,salary);

  return 0;
}

//called function
float calculateWeeklySalary(int grade, float hrsWorked){
  float weelysalary;
  //calculation salary
  switch(grade){
    case 1:
    weelysalary = hrsWorked*100.00;
    break;
    case 2:
    weelysalary = hrsWorked*200.00;
    break;
    case 3:
    weelysalary = hrsWorked*300.00;
    break;
    default:
    break;
  }
  return weelysalary;
}//end function
//function called
void printDetails(int grade, float hrsWorked, float salary){
  //checked the condition
  if(salary !=-1){
    printf("Grade :%d\n",grade);
    printf("Working Hours :%.2f\n",hrsWorked);
    printf("Salary :%.2f\n",salary);
  }//end if condition
  else{
    printf("Invalide grade\n");
  }//end else condition
 
}//end function