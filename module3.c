/**********************************************/
/* First year, semester I                     */
/* Project: Modular programming               */
/* Authors: Mandru Anamaria, Crisan Alexandra */
/* Technical University of Cluj-Napoca        */
/**********************************************/

#include "module3.h"

void even_odd(int n , int *array_ptr)
{
    int i = 0 , e = 0 , o = 0;

    for (i = 0; i < n; i++)
      {
      if (array_ptr[i] % 2 == 0) e++;
    else o++;
      }
    printf("%d even elements.\n%d odd elements.\n" , e , o);
}

int pali(int n , int *array_ptr)
{
    int i = 0 , copy = 0 , inv , p = 0;

    for (i = 0; i < n; i++)
    {
        copy = array_ptr[i];
        inv = 0;
        while (copy != 0)
        {
            inv = inv * 10 + copy % 10;
            copy = copy / 10;
        }
        if ( array_ptr [ i] == inv) p++;
    }
     return p;
}

int perf_square(int n , int *array_ptr)
{
    int ps = 0 , i = 0;

    for (i = 0; i < n; i++)
    {
        if (sqrt(array_ptr[i]) == (int)(sqrt(array_ptr[i]))) ps++;
    }
     return ps;
}

int perf_nr(int n , int *array_ptr)
{
    int i = 0 , pn = 0 , j = 0 , s;

    for (i = 0; i < n;i++)
    {
        s = 0;
        for (j = 1; j <= array_ptr[i]/2; j++)
            if(array_ptr[i] % j == 0) s = s + j;

        if (s == array_ptr[i]) pn++;
    }
     return pn;
}

int prime(int n , int *array_ptr)
{
    int i = 0 , k , p = 0 , j = 0;

    for (i = 0; i < n; i++)
    {
        k = 1;
        for (j = 2; j <= array_ptr[i]/2; j++)
            if (array_ptr[i] % j == 0) k = 0;

        if (k == 1) p++;
    }
     return p;
}
