#include <stdio.h>
 
 /*Write a program that asks for an integer, a float and a double input from the user. Print the sum in float data typewith only 3 decimal places.*/

 //integer 3 4 5 %d
 //float 6.9 %f
 //double 3.141619 %f, %lf

int main(){
	//declare variables
	int dNum1;
	float fNum2;
	double lfNum3;

	//ask the user for input
	ptintf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	ptintf("\n Give me a float: ");
	scanf("%f", &fNum2);

	ptintf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	//we process the adding
	fSum = dNum1 + fNum2 + lfNum3;

	//lets print the value
	ptintf("\nnThe sum of %d %f and %lf is %f. \n", dNum1, fNum2, lfNum3, fSum);

	

	return 0;
}//endman
