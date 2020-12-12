//Online re-sit exam - function//

//including header file
#include<stdio.h>
#include<assert.h>

//function phototype
double calculateAmount(int type, double initial);
void printDetails(int type, double initial, double balance);
int checkEligibility(double balance);

//main function
int main(void){
	int type;
	double initial,balance;
	
	
	for (int i=0;i<5;i++){
	printf("**************************\n");
	printf("Enter your account type :");
	scanf("%d",&type);
	
	printf("Enter your initial amount :");
	scanf("%lf",&initial);
	
	//function call
 	calculateAmount(type,initial);
	
	//function call
	printDetails(type,initial,calculateAmount(type,initial));
	
	assert(checkEligibility(5000)==1);
	assert(checkEligibility(4000)==2);
	//function call
	checkEligibility(calculateAmount(type,initial));
	printf("Eligibility : %d\n",checkEligibility(balance));
	}
	
	
	return 0;
}//end main function

//function implimantation
double calculateAmount(int type, double initial){
	double calculateAmount;
	switch(type){
		case 1 :
		calculateAmount=initial+(initial*4)/100;
		break;
		case 2 :
		calculateAmount=initial+(initial*7)/100;
		break;
		case 3 :
		calculateAmount=initial+(initial*10)/100;
		break;
		default:
		break;
	}
	return calculateAmount;
}
//function implimantation
void printDetails(int type, double initial, double balance){
	if(type < 3){
		puts("");
		printf("Account type : %d\n",type);
		printf("Initial Amount :%.2lf\n",initial);
		printf("Total Balance :%.2lf\n",balance);
		puts("");
	}
	else{
		printf("Invailed account type plz enter (1-3)\n");
	}
}
//function implimantation
int checkEligibility(double balance){
	int Eligibility;
	if(Eligibility>=5000){
		Eligibility = 1;
		}
	else{
		Eligibility = 2;
	}
	return Eligibility;
}



