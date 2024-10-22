/**********************************************/
/* First year, semester I                     */
/* Project: Modular programming               */
/* Authors: Mandru Anamaria, Crisan Alexandra */
/* Technical University of Cluj-Napoca        */
/**********************************************/

#include "module2.h"

void sorting1D(int *array_ptr, int n)
{
    int i = 0, j = 0,v[50], aux = 0;
     for(i=0;i<n;i++)
     {  v[i]=array_ptr[i];
     }

    for(i = 0; i < n; i++)
    for(j = i+1; j < n; j++)
    if(v[i] < v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
    printf("Descending sorting by direct selection: ");
    for(i = 0; i < n; i++)
        printf("%d ",v[i]);

        printf("\n");
}

void sorting1A(int *array_ptr, int n)
{
    int i = 0, j = 0,v[50], aux = 0;
         for(i=0;i<n;i++)
     {  v[i]=array_ptr[i];
     }
    for(i = 0; i < n; i++)
    for(j = i+1; j < n; j++)
    if(v[i] > v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
    printf("Ascending sorting by direct selection: ");
    for(i = 0; i < n; i++)
        printf("%d ",v[i]);

        printf("\n");
}

void sorting2D(int *array_ptr, int n)
{
    int finished = 0,i = 0, j = 0, v[50],aux = 0;
     for(i=0;i<n;i++)
     {  v[i]=array_ptr[i];
     }
 while(!finished) { finished = 1;
    for(i = 0; i < n-1; i++)
    if(v[i] < v[i+1]) {
             aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
        finished = 0;
        }}
    printf("Descending sorting by bubble method: ");
    for(i = 0; i < n; i++)
        printf("%d ",v[i]);

        printf("\n");
}

    void sorting3A(int *array_ptr,  int n)
{
    int i = 0, j = 0, v[50],aux = 0;
       for(i=0;i<n;i++)
     v[i]=array_ptr[i];
   for(j = 1; j < n; j++) {
   aux = v[j];
   i = j-1;
   while( aux < v[i] && i >=0){
        v[i+1] = v[i];
        i = i-1;
    }
    v[i+1] = aux;
    }
    printf("Ascending sorting by insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ",v[i]);

        printf("\n");
}

void sorting4A(int *array_ptr, int n)
  {
      int k[50] = {0}, b[50], i = 0,v[50], j = 0;

       for(i=0;i<n;i++)
     v[i]=array_ptr[i];

    for(i = 0; i < n-1; i++)
    for(j = i+1; j < n; j++)
    if(v[i] > v[j])  k[i]++;
    else k[j]++;
    for(i = 0; i < n; i++)
    b[k[i]]=v[i];

    printf("Sort descending by counting: ");
    for(i = 0; i < n; i++)
        printf("%d ",b[i]);

        printf("\n");
  }
