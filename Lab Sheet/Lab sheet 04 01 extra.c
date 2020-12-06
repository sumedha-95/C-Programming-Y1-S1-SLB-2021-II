//Write another function called drawLinesWithRow() to pass the no of lines(colloums) as a
parameter.// 

//Lab sheet execrise 01 Extra//
//drawline with collomsw//

//incluading header file
#include<stdio.h>

//function declaration
void drawlineWithrows(int colloums);

//main function
int main(){
        //user input
        int colloums;

        printf("Enter colloums you want :");
        scanf("%d",&colloums);


        //function calling
        drawlineWithrows(colloums);
        puts("");

        return 0;
}

//function implemantation
void drawlineWithrows(int colloums){
        for (int i=0;i<=10;i++){
                for(int j=0;j<colloums;j++){
                        printf("*");
                }
                puts("");//new line
        }
}