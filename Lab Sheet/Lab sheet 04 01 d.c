//d) Call the function created in section c) in your main program and draw two rectangles with
6 and 12 rows. //

//Lab sheet execrise 01 d//
//drawline with raow//

//incluading header file
#include<stdio.h>

//function declaration
void drawlineWithrows(int rows);

//main function
int main(){
        //user input
        int rows1=6;
        int rows2=12;


        //function calling
        drawlineWithrows(rows1);
        puts("");
        drawlineWithrows(rows2);


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