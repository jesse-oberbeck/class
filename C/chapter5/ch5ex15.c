#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	if(argc < 3){
		puts("Give your height in inches, and your weight in lbs.");
		return(1);
	}
	long weight = strtol(argv[2], NULL, 10);
	long height = strtol(argv[1], NULL, 10);
	double divisor = (pow(height, 2));
	//printf("divisor %lf\n", divisor);
	double bmi = (weight * 703)/divisor;
	printf("height %li weight %li bmi %lf\n", height, weight, bmi);
	if(bmi < 18.5){
		printf("Underweight. BMI is: %lf\n", bmi);
	}else if(bmi > 30){
		printf("OBESE. BMI is: %lf\n", bmi);
	}else if(bmi > 25){
		printf("Overweight. BMI is: %lf\n", bmi);
	}else{
		printf("Normal range. BMI is: %lf\n", bmi);
	}

}
