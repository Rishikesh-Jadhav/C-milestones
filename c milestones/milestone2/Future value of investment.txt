

#include <stdio.h>
#include<math.h>

double FV(double rate, unsigned int nperiods, double PV);
int main()
{
    double rate,PV;
    float result;
    unsigned int nperiods;
    printf("Enter the following for finding the future value of your investment-");
    printf("\nEnter the rate:");
    scanf("%lf", &rate);
printf("\nEnter the Principal Value:");
    scanf("%lf", &PV);

printf("\nEnter the nummber of periods of compounding:");
    scanf("%u", &nperiods);

result = FV(rate,nperiods,PV);
printf("The future value of the investment for %u periods is : %lf",nperiods,result);

    return 0;
}

double FV(double rate, unsigned int nperiods, double PV){
    double FV,a,b,c;
    a = (1+rate);
    b = nperiods;
    c = pow (a, b) ;
    FV = PV *c ; 

    return FV;
    
}

