#include <stdio.h>
int main() {
    int n1, n2,n3, max,x;
    printf("Enter three positive integers: ");
    scanf("%d %d %d", &n1, &n2,&n3);

    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            break;
        }
        ++max;
    }
    
    
     x = (max> n3) ? max : n3;
    
     while (1) {
        if (x % max == 0 && x % n3 == 0) {
           printf("The LCM of %d , %d and %d is %d.", n1, n2,n3, x);
        
            break;
        }
        ++x;
    }
    return 0;
}