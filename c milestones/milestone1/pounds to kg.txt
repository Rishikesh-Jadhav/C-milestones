
#include <stdio.h>

int main()
{
    const float KG = 0.453592;  
          float pound;  
  
    printf("Enter weight in pounds\n");  
    scanf("%f", &pound);  
  
    printf("Weight in Kilograms is %f\n", (pound * KG) );  
  
    return 0; 
}
