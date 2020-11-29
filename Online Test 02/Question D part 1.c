// Online Test2 - Version D - 01//

//including header file
#include<stdio.h>
// main function
int main(void)
{
	// variable declaration
	int i, r, p, a ;
  printf("Enter Number :");
  scanf("%d",&a);
	
	// nested loop
	for (i = a; i >=1; i--) {
		for (r =a; r >= 1; r--) {
			for (p = a; p >=1; p--) {
				// print
				printf("[%d %d %d]\n", i, r, p);
			}//end loop 01
		}//end loop 02
	}//end loop 03
	
    return 0;
}//end main function
