#include<stdio.h>
/*
Aim to find the sum of this series up to n terms;
 Sn =  2 + 22 + 222 + 2222 + 22222 + ....... upto n terms;
 now this can be written as :
    Sn = 2*{ 10^0 + 10^1 + 10^2 + 10^ 3 +  ..... +  10^n }


*/

// let's define power function;

int power(float base,int expo){
	float temp = 1;

	for (int  i = 1; i <= expo; i++)
	{
		temp *=base;

	}
	return temp; //returning a int value ;

}


int sum_series(int n){
    int temp = 0;
       for (int i = 0; i <= n; i++)
           temp += power(10,i);
        return temp;
}

int main(){
int n,sum=0;

printf("Series is 2 + 22 + 222 + 2222 + 22222 + ....... upto n terms\n");

//Now get the value n;
printf("Enter the value of n :\n ");
scanf("%d",&n);

//now use for loop to sum one by one terms



for (int k = 1; k <= n; k++)
    sum += sum_series(k);
       



 printf("Sn for %d terms is  %d", n, 2* sum);

return 0;

}


