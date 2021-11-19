#include <stdio.h>

int main()
{
     float inch, cm;
    printf("Enter length in Inch: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("Equivalent length in Centimeters = %0.2f", cm);
   
    return 0;
}