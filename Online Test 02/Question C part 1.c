//Online test version C//
#include<stdio.h>
//main function
int main(){
  //declare a variable
  int a,b,c,value;
  //user input value
  printf("Enter value :");
  scanf("%d",&value);
  //check the condition
  if (value <=5){

  for(a=1 ; a<=value;a++){
    for (b=1 ;b<=value;b++){
      for(c=1;c<=value;c++){
        //print
        printf("[%d %d %d]\n",a,b,c);
      }//end for loop 01
    }//end for loop 02
  }//end for loop 03
  }
  else{
    printf("Enter value with in 1 - 5 .");
  } //end if condition

  return 0;
}//end main function


