#include <stdio.h>
//main function
int main(){
//declare a veriable
int a=0,b=0;
int i;

printf("Enter Number :");
scanf("%d",&i);
//begining for loop
for(a=1;a<=i;a++){
  
  for(b=i;b>=a;b--){
    
    printf(" %c",a+96);

  }//end for loop 01
  printf("\n");//new line

}//end for loop 02
  
  return 0;
  
}//end main function