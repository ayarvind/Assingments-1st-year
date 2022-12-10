#include<stdio.h>

/*
Aim to find the sum of this series :
Sn = 1 + x/4 + x/8 + ...... upto n terms;
know in general Nth terms is ( x^(n-1) )/2^n
Now Sn =  1 + sum(  ( x^(i-1) )/2^i ) : from i=2 to i= n-1 ;

*/

// lets define power function


float power(float base,int expo){
	float temp = 1.0;

	for (int  i = 1; i <= expo; i++)
	{
		temp *=base;

	}
	return temp; //returning a float value ;

}

int main(){
    int x, n;
    float sum = 0;

    printf("Series Sn =  1 + x/4 + x^2/8 + x^3/16 +  ...... upto n terms\n");
    printf("Enter total number of terms, i.e value of n and value of x respectively:\n");
    scanf("%d %d",&n,&x);

    for (int i = 1; i <= n+1; i++){
       sum +=  power(x,i-1)/power(2,i);

    }


    printf("Value of Sn = %f",sum);

    



    return 0;
}
