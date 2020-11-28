#include <stdio.h>

//main function
int main()
{   //declare variable
    int i;  
    int a=0,b=0;

    //user input
    printf("Enter Number :");
    scanf("%d",&i);//read the number
    printf("\n");
    //for loop 01
    for(a=1;a<i;a++){
       //for loop 02
       for(b=1;b<=a;b++){
         printf(" %c",a+64);
       } //end for loop 02
       printf("\n");
    }//end for loop 01
    return 0;
}//end main function