//File handling //

//Write a program to input the id, name and average
//marks of a student from the keyboard and write the
//data to “marks.dat” file.//


//including header file
#include<stdio.h>

//main function.
int main(){
  //declare a variable
  char id [20];
  char name [20];
  float avg;

  //Declaring a file pointer
  FILE*fptr;
  //Open a file to write data. 
  fptr=fopen("marks.dat","w");//change the "a" for append mode

  //checked the file
  if(fptr==NULL){
    printf("File could not create sucssfully");
    return -1; 
  }
  fprintf(fptr,"Id number\t\t\tName\t Avarage mark\t\n");

  for (int i=1;i <=5;i++){
    printf("plese input your id :");
    scanf("%s",id);
    printf("please input your name :");
    scanf("%s",name);
    printf("Avarage mark :");
    scanf("%f",&avg);
    
    fprintf(fptr,"%s\t %12s\t %8.2f\t\n",id,name,avg);
    printf("\n"); 
  }
fclose(fptr);//file closed
  return 0;
}//end main function
