//Write function called drawLinesWithRow() to pass the no of lines(rows) as a
parameter. //

//incluading header file
#include<stdio.h>

//function declaration
void drawlineWithrows(int rows);

//main function
int main(){
        //user input
        int rows;
        printf("Enter number of rows you want:");
        scanf("%d",&rows);

        //function calling
        drawlineWithrows(rows);


        return 0;
}

//function implemantation
void drawlineWithrows(int rows){
        for (int i=0;i<=rows;i++){
                for(int j=0;j<20;j++){
                        printf("*");
                }
                puts("");//new line
        }
}