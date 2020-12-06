//h) Write a new function to print a rectangle with a given width, height and the character as
//the parameter. The rectangle should be printed using that character. Call the function in
//your main program//

//Lab sheet execrise h//
//hight widtch and character//

//incluading header file
#include<stdio.h>

//function declaration
void drawhightandwidth(int hight,int width,char ch);

//main function
int main(){
        int hight,width;
        char ch;
        //user input
        printf("Enter Hight :");
        scanf("%d",&hight);

        printf("Enter Width :");
        scanf("%d",&width);

        printf("Enter Character :");
        scanf(" %c",&ch);

        //function calling
        drawhightandwidth(hight,width,ch);
        puts("");


        return 0;
}

//function implemantation

void drawhightandwidth(int hight,int width,char ch){

        //beging for loop
        for (int i=0;i<=hight;i++){
                for(int j=0;j<width;j++){
                        printf("%c",ch);
                }
                puts("");//new line
        }
}