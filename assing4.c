#include<stdio.h>
/* 
Our aim is to print the sum of this series :
 1 + (1+2) + (1+2+3) + (1+2+3+4) + ..... upto n terms;
 
*/
//define function for calling in for loop for each iteration

int sum_series(int n){
    int temp = 0;
    
     /*here i commited a mistake which took me much time to figure out the mistake 
     //here i did not intialized the value of <temp> to zero.
      And due to this c comiler stores here a garbage value;
    */
       for (int i = 1; i <= n; i++)
            temp += i;
       
        
        return temp;
        
}


int main(){
    int n,  sum = 0;
    printf("Series is 1 + (1+2) + (1+2+3) + (1+2+3+4) + ..... upto n terms\n ");
    printf("Enter the value of n \n");
    scanf("%d",&n);
    
        for (int k = 1; k <= n; k++)
            sum += sum_series(k);
       
    
    
    printf("Sum of the series is %d",sum);

    

    return 0;
}


//now it works perfects thanks to my learning.

//Ouput for n=4; is 20;
