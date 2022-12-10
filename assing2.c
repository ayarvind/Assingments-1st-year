#include<stdio.h>
//Aim of our programms:

/*
    our series is  -x + x^2 - x^3 + x^4 - 5^5 + ..... up to n terms;
    now according to Gp series  summation is -x((-x)^n - 1)/(-x - 1) => x((-x)^n - 1)/(x + 1)

*/
//define power funtion to the value of <base> to the power  <expo>


float power(float base,int expo){
	float temp = 1.0;

	for (int  i = 1; i <= expo; i++)
	{
		temp *=base;

	}
	return temp; //returning a float value ;

	
}

int main(){
    int n;
	float x;
	
	printf("Series is -x + x^2 - x^3 + x^4 + ..... (-1)^n * x^n\n");

	printf("Enter value of n, x\n");
	scanf("%d %f",&n,&x);

	if(x>1){
		//<sum> the summation of GP series;

		float sum = x*( power(-x,n) -1 )/(x+1) ; //here x !=1;

		//printing the final output;

		printf("Series sum is : %f \n",sum);

	}else{
        // printing the error message when we get x=1 as user input;

		printf("You can't enter the value of x = 1");

	}

    return 0;
}