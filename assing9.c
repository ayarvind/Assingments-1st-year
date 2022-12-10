#include<stdio.h>
/*
 Aim of our program :
    Sn   =  series is x - x^2/2! + x^3/3! + ... upto n terms;


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
	float x;
	
	printf("Series is x - x^2/2! + x^3/3! + ... upto n terms\n");

	printf("Enter value of n, x\n");
	scanf("%d %f",&n,&x);

    float partial_sum = 0;

    for (int  i = 1; i <= n; i++) {
        partial_sum += power(-1,i+1)*power(x,i)/factorial(i);
    }

    printf("Final summation of series is ,i.e Sn =  %f", partial_sum   );
    
    return 0;
}