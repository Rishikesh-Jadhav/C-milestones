#include <stdio.h>
 unsigned int factorial (unsigned int num);
int main()
{
   unsigned int a;
    printf("Enter a number:");
     scanf("%u",&a); 
     factorial(a); 

    return 0;
}

unsigned int factorial(unsigned num){
    unsigned int count, j=1;
    if(num==0){
        printf("The value of 0 factorial is 1");
    }
    else if(num<0) {
          printf("Enter a valid number");
    }
    else{
        for(count=num;count>=1;count--){
            
            j=count*j;
        }
        printf("The value of %u factorial is %u",num,j);
       
    }
}