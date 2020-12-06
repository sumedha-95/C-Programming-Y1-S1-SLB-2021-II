//Write another function called drawLinesWithRow() to pass the no of lines(rows)and (colloums) as a
parameter.// 

//Lab sheet execrise 01 Extra//
//drawline with collomsw//

//incluading header file
#include<stdio.h>

//function declaration
void drawlineWithrows();

//main function
int main(){



        //function calling
        drawlineWithrows();
        puts("");


        return 0;
}

//function implemantation
int x,y;
void drawlineWithrows(){
        //declare a variable
        int x,y;
        //user input 01
        printf("Enter rows you want:");
        scanf("%d",&x);
        //user input 02
        printf("Enter colloums you want :");
        scanf("%d",&y);
        puts("");

        //beging for loop
        for (int i=0;i<=x;i++){
                for(int j=0;j<y;j++){
                        printf("*");
                }
                puts("");//new line
        }