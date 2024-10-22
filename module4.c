/**********************************************/
/* First year, semester I                     */
/* Project: Modular programming               */
/* Authors: Mandru Anamaria, Crisan Alexandra */
/* Technical University of Cluj-Napoca        */
/**********************************************/

#include "module4.h"

int a_Fibo(int n , int* array_ptr)
{
    int a[50] , i = 0 , k = 1;

    a[0] = 1;
    a[1] = 1;

    if (array_ptr[0] == a[0] && array_ptr[1] == a[1])
    {
        for (i = 2; i < n; i++)
        {
            a[i] = a[i-1] + a[i-2];
            if (a[i] != array_ptr[i]) k = 0;
        }
    }
    else k = 0;

    if (k == 1) return 1;
           else return 0;
}

int a_div(int n , int* array_ptr , int nr)
{
    int j = 0 , a = 0 , m = 0;

    for (j = 1; j <= nr; j++)
    if ( nr % j == 0 && array_ptr[m] == j) { a++;
                                     m++; }

    if (a == n) return 1;
    else return 0;
}

int a_perf_square(int n , int* array_ptr)
{
    int i = 0 , m = 0;

    for (i = 0; i < n; i++)
        if (array_ptr[i] == pow((i + 1) , 2)) m++;

    if (m == n) return 1;
           else return 0;
}

int pa(int n , int* array_ptr)
{
    int k = 1 , i = 0;

    for (i = 1;i < n-1; i++)
        if ((array_ptr[i] - array_ptr[i-1]) != (array_ptr[i+1] - array_ptr[i])) k = 0;

    if (k == 1) return 1;
           else return 0;
}

int pg(int n , int* array_ptr)
{
    int k = 1 , i = 0;

    for (i = 1;i < n-1; i++)
        if ((float)(array_ptr[i]/array_ptr[i-1]) != (float)(array_ptr[i+1]/array_ptr[i])) k = 0;

    if (k == 1) return 1;
           else return 0;
}
