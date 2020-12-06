//Exercise 1: a) //
//Write a function drawLines() to draw the below figure. //
//* * * * * * * * * * * * //
//* * * * * * * * * * * *//
// * * * * * * * * * * * *//
// * * * * * * * * * * * * //
 
//Lab sheet 04 Exercise 01//

//including header file

#include<stdio.h>

//function declaration

void drawline();

//main function

int main(){
        //function calling
        drawline ();
        return 0;
}
//function Implemantation

void drawline(){
        for (int i =0;i<=10;i++){
                for(int j=0;j<=20;j++){
                        printf("*");
                }
                printf("\n");
        }

}
