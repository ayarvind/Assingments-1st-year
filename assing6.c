#include<stdio.h>
/*
 Aim of our program :
        series is x - x^3/3! + x^5/5! - x^7/7! + ... upto n terms;
        nth terms is : -1^(n+1)*(x^2n - 1)/(2n-1)!
        sum is Sum[-1^(i+1)*(x^2i - 1)/(2i-1)!] : i=1 to n;


*/

float factorial(int of){
    int fact = of;

    while (of > 1){
        fact *= (of-1);
        of--;
    }
   return fact;
    
}

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
    float sum = 0;
	float x;
	
	printf("Series is x - x^3/3! + x^5/5! - x^7/7! + ... upto n terms\n");

	printf("Enter value of n, x\n");
	scanf("%d %f",&n,&x);

    for (int i = 1; i <= n; i++)
    {
        sum += power(-1,i+1)*power(x,2*i-1)/factorial(2*i-1);
    }
    
    

    printf("Final summation of series is %f", sum  );
    
    return 0;
}