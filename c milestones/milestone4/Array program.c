

#include <stdio.h>


int input();
 

int main()
{
    int choice,size,search,found,pos,i,j,x,answer,element ;
    
    printf("\n1. Add an element to the Array the application");
    printf("\n2. Search if an element exists in the array");
    printf("\n3. Remove an element from the array");
    printf("\n4. Sort the array");
    printf("\n5. Print all elements in the array");
    printf("\n6. Exit\n");
    printf("Your choice: ");
    choice = input();
   


     switch (choice) {
    case 1: {
         printf ("\nEnter the size of the array:");
         scanf ("%d", &size);
         int a[size];
     
       printf ("\nEnter the elements in the array:");
        for (i = 0; i < size; i++)
    {
      printf ("\nEnter value number %d:", i + 1);
      scanf ("%d", &a[i]);
      
    }
    printf("Enter an element to add: ");
    scanf("%d", &element);

     found = 0;
    for(i=0; i<size; i++)
    {
    
        if(a[i] == element)
        {
            found = 1;
            break;
        }
    }
    
     if(found == 1)
    {
        printf("The element already exists");
    }
    else
    {
 printf("Enter the element position : ");
    scanf("%d", &pos);

   
    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        
        for(i=size; i>=pos; i--)
        {
            a[i] = a[i-1];
        }
        
      
        a[pos-1] = element;
        size++; 

       
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", a[i]);
        }
    }

    }
    
    
    
    
    
          break;
    }
    case 2: {
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
    
        break;
    
       }
       
    
    case 3:{
        
         printf ("\nEnter the size of the array:");
         scanf ("%d", &size);
         int a[size];
     
       printf ("\nEnter the elements in the array:");
        for (i = 0; i < size; i++)
    {
      printf ("\nEnter value number %d:", i + 1);
      scanf ("%d", &a[i]);
    } 
        printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
    
        for(i=pos-1; i<size-1; i++)
        {
            a[i] = a[i + 1];
        }

      
        size--;

       
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", a[i]);
        }
   
   }
       break;
     
    }
    
   case 4:{
       
       printf ("\nEnter the size of the array:");
  scanf ("%d", &size);
  int a[size];

  printf ("\nEnter the elements in the array:");
  for (i = 0; i < size; i++)
    {
      printf ("\nEnter value number %d:", i + 1);
      scanf ("%d", &a[i]);
    }

  printf
    ("\nEnter 1 for ascending order and 0 for descending order operation: ");
  scanf ("%d", &answer);


  if (answer == 1)
    {

      //ascending order

      for (i = 0; i < size; i++)
	{
	  for (j = i + 1; j < size; j++)
	    {
	      if (a[i] > a[j])
		{
		  x = a[i];
		  a[i] = a[j];
		  a[j] = x;

		}
	    }
	}
      printf ("\nThe ascending order of the elements in the array is: ");
      for (i = 0; i < size; i++)
	{
	  printf ("%d  ", a[i]);
	}
    }

  else if (answer == 0)
    {


      for (i = 0; i < size; i++)
	{
	  for (j = i + 1; j < size; j++)
	    {
	      if (a[i] < a[j])
		{
		  x = a[i];
		  a[i] = a[j];
		  a[j] = x;

		}

	    }

	}
      printf ("\nThe descending order of the elements in the array is: ");
      for (i = 0; i < size; i++)
	{
	  printf ("%d  ", a[i]);
	}

    }
  else
    {
      printf ("\nOops you have entered the wrong choice!");
    }
         break;
   } 
    
    case 5 : {
        
         printf ("\nEnter the size of the array:");
  scanf ("%d", &size);
  int a[size];

  printf ("\nEnter the elements in the array:");
  for (i = 0; i < size; i++)
    {
      printf ("\nEnter value number %d:", i + 1);
      scanf ("%d", &a[i]);
    }
        
      for(i = 0; i < size; i++){
      printf("\nNumber %d = %d",i+1, a[i]);   
      }
      
       break;
    }
    
    case 6 :{
        
        printf("You have successfully exited the program!");
         break;
         }
    default:
        printf("Wrong Input\n");
    }
   

    return 0;
}

int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
