

#include <stdio.h>

int main()
{
      int size,search,found,i ;
   printf ("\nEnter the size of the array:");
         scanf ("%d", &size);
         int a[size];
     
       printf ("\nEnter the elements in the array:");
        for (i = 0; i < size; i++)
    {
      printf ("\nEnter value number %d:", i + 1);
      scanf ("%d", &a[i]);
    } 
      printf("\nEnter element to search: ");
    scanf("%d", &search);

 
    found = 0; 
    
    for(i=0; i<size; i++)
    {
    
        if(a[i] == search)
        {
            found = 1;
        break;
        }
    }

  
    if(found == 1)
    {
        printf("\n%d is found at position %d", search, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", search);
    }
    
    
    
    
       

    return 0;
}
