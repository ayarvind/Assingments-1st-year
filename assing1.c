#include<stdio.h>
//Motive of our program:

/*

Here we have a series 1 + x + x^2 + x^3 + x^4 + ..... x^(n-1);
and this series is forming a GP whose common ratio is x;
then by using the summation formulae of Gp series is : a(r^n - 1)/(r-1);
here a is first term and n is total number of terms /
r is common ratio : r = a2/a1;

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
	
	printf("Series is 1 + x + x^2 + x^3 + x^4 + ..... x^(n-1)\n");

	printf("Enter value of n, x\n");
	scanf("%d %f",&n,&x);

	if(x>1){
		//<sum> the summation of GP series;

		float sum = ( power(x,n) -1 )/(x-1) ; //here x !=1;

		//printing the final output;

		printf("Series sum is : %f \n",sum);

	}else{
        // printing the error message when we get x=1 as user input;

		printf("You can't enter the value of x = 1");

	}

	return 0;

}


//our program successfuly run;