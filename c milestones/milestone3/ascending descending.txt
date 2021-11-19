
#include <stdio.h>

int
main ()
{
  int i, j, x, size, answer;



  printf ("\nEnter the size of the array:");
  scanf ("%d", &size);
  int a[size];

  printf ("\nEnter the elements in the array:");
  for (i = 0; i < size; i++)
    {
      printf ("\n\nEnter value number %d:", i + 1);
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
	  printf ("%d", a[i]);
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
	  printf ("%d", a[i]);
	}

    }
  else
    {
      printf ("\nOops you have entered the wrong choice!");
    }


  return 0;
}
