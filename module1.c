/**********************************************/
/* First year, semester I                     */
/* Project: Modular programming               */
/* Authors: Mandru Anamaria, Crisan Alexandra */
/* Technical University of Cluj-Napoca        */
/**********************************************/

#include "module1.h"

int mini(int *array_ptr, int n)
{
    int mn = array_ptr[0] , i = 0,x;
     for(i = 0; i < n; i++)

         {  x=array_ptr[i];
             if( (array_ptr[i]) < mn)
        mn =array_ptr[i];}
        return mn;
}

int maxi(int *array_ptr, int n)
{
    int mx = array_ptr[0] , i = 0;
     for(i = 0; i < n; i++)
     {if( array_ptr[i]> mx)
        mx = array_ptr[i];}
        return mx;
}

void interchange(int *array_ptr, int n)
{
    int i = 0, mn = 0,v[50], mx = 0;
   mn=mini(array_ptr,n);
   mx=maxi(array_ptr,n);
    for(i=0;i<n;i++)
     { v[i]=array_ptr[i];
     }
    for(i = 0; i < n; i++)
  {if(v[i] == mn)
    v[i]=mx;
    else if(v[i] == mx)
    v[i]=mn;}
    printf("The array after interchanging the minimum with the maximum is: ");
  for(i = 0; i < n; i++)
        printf("%d ",v[i]);
        printf("\n");
}

void delete_mnmx(int *array_ptr, int n)
{
    int i = 0,nr=0, mn = 0, v[50],mx = 0;
         mn=mini(array_ptr,n);
   mx=maxi(array_ptr,n);
  for(i = 0; i < n; i++)
    if(array_ptr[i] != mn && array_ptr[i]!= mx )
     {nr++;
     v[nr]=array_ptr[i];}
     printf("The array after deleting minimum and maximum is: ");
       for(i = 1; i <=nr; i++)
   printf("%d ",v[i]);
        printf("\n");
}
int gcf(int *array_ptr, int n)
{
    int mn = 0, mx = 0;
       mn=mini(array_ptr,n);
   mx=maxi(array_ptr,n);
  while(mn!=mx)
  {   if(mx>mn)
      mx=mx-mn;
      else mn=mn-mx;
  }
  return mx;
}
