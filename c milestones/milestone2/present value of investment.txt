

#include <stdio.h>
#include<math.h>

double PV(double rate, unsigned int nperiods, double FV);
int main()
{
    double rate,FV;
    float result;
    unsigned int nperiods;
    printf("Enter the following for finding the present value of your investment-");
    printf("\nEnter the rate:");
    scanf("%lf", &rate);
printf("\nEnter the Future Value:");
    scanf("%lf", &FV);

printf("\nEnter the number of periods of compounding:");
    scanf("%u", &nperiods);

result = PV(rate,nperiods,FV);
printf("The present value of the investment for %u periods is : %lf",nperiods,result);

    return 0;
}

double PV(double rate, unsigned int nperiods, double FV){
    double PV,a,b,c;
    a = (1+rate);
    b = nperiods;
    c = pow (a, b);
    PV = FV/c ; 

    return PV;
    
}

