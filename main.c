/**********************************************/
/* First year, semester I                     */
/* Project: Modular programming               */
/* Authors: Mandru Anamaria, Crisan Alexandra */
/* Technical University of Cluj-Napoca        */
/**********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "module1.h"
#include "module2.h"
#include "module3.h"
#include "module4.h"

int main()
{
    int  n , array[50] , i = 0 , nr , choice = 0;

    printf("Enter the number of elements of the array: ");
    scanf("%d" , &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
   {
      printf("array[%d] = " , i);
      scanf("%d" , &array[i]);
   }

     int *array_ptr = array;

     while(1)
     {
         printf("Choose a number coresponding to one of the following modules: \n1. Operations with minimum and maximum of the array;\n2. Sorting methods;\n3. Different characteristics of the elements of the array;\n4. Verifing if the array is a specific array.\nEnter any other number to exit.\n");
         scanf("%d" , &choice);

         if(choice == 1)
          {
/* The minimum in the array */
    printf("The minimum in the array:%d\n",mini(array,n));

/* The maximum in the array */
    printf("The maximum in the array:%d\n",maxi(array,n));

/* Exchanging the minimum elements with the maximum ones */
    interchange(array,n);

/* Deleting minimum and maximum elements */
    delete_mnmx(array,n);

/* The largest common divisor between the minimum and maximum of the array */
    printf("The largest common divisor between the minimum and maximum of the array: %d\n", gcf(array,n));

    printf("\n");
          }

          else if(choice == 2)
            {
/* Descending sorting by direct selection */
    sorting1D(array,n);

/* Ascending sorting by direct selection */
    sorting1A(array,n);

/* Descending sorting by bubble method */
    sorting2D(array,n);

/* Ascending sorting by insertion */
     sorting3A(array,n);

/* Sort descending by counting */
     sorting4A(array,n);

     printf("\n");
     }

          else if(choice == 3)
          {
/* The number of elementes of the array which are: */
            printf("Your choice is module %d.\n" , choice);

            /* -odd  and even  elements*/
                even_odd(n , array_ptr);

            /* -palindrome numbers */
                printf("Palindrome elements in the array: %d.\n" , pali(n , array_ptr));

            /* -perfect square elements */
                printf("Perfect squares in the array: %d.\n" , perf_square(n , array_ptr));

            /* -perfect numbers (numbers which are equal with the sum of its divisors) */
                printf("Perfect numbers in the array: %d.\n" , perf_nr(n , array_ptr));

            /* -prime numbers */
                printf("Prime elements in the array: %d.\n" , prime(n , array_ptr));

                printf("\n");
            }

          else if (choice == 4)
                {
/* Verifying if the array is: */
                  printf("Your choice is module %d.\n" , choice);

            /* -the array of the first n-th elements of Fibonacci's array */
    if (a_Fibo(n , array_ptr) == 1) printf("The array represents the array of the first %d-th elements of Fibonacci's array.\n" , n);
                               else printf("The array does not represents the array of the first %d-th elements of Fibonacci's array.\n" , n);

            /* -the array of divisors of a given number */
    printf("Enter a number to verify if the array represents its divisors: ");
    scanf("%d" , &nr);
    if (a_div(n , array_ptr , nr) == 1) printf("The array represents the divisors of %d.\n" , nr);
                                   else printf("The array does not represents the divisors of %d.\n" , nr);

            /* -the array of the first n-th perfect squares */
    if (a_perf_square(n , array_ptr) == 1) printf("The array represents the array of the first %d-th perfect squares.\n" , n);
                                      else printf("The array does not represents the array of the first %d-th perfect squares.\n" , n);

            /* -an arithmetic progression */
    if (pa(n , array_ptr) == 1) printf("The array represents an arithmetic progression.\n");
                           else printf("The array does not represents an arithmetic progression.\n");

            /* -a geometric progression */
    if (pg(n , array_ptr) == 1) printf("The array represents a geometric progression.\n");
                           else printf("The array does not represents a geometric progression.\n");

            printf("\n");
                  }

            else break;
     }

    return 0;
}
