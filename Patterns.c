/******************************************************************************

*
**
***
****
*****
****
***
**
*
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j,k=1;

    scanf("%d",&n);

    for(i=1;i<=n*2;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<n){
            k++;
        }
        else k--;

        printf("\n");
    }

    return 0;
}

/******************************************************************************

   *
  **
 ***
****
 ***
  **
   *

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j,k=1,s;

    scanf("%d",&n);
    s=n-1;
    for(i=1;i<=n*2;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            k++;
            s--;
        }
        else{
            k--;
            s++;
        }
        printf("\n");
    }

    return 0;
}





  /******************************************************************************

  Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
  C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
  Code, Compile, Run and Debug online from anywhere in world.

  *
 ***
*****
 ***
  *

  *******************************************************************************/
  #include <stdio.h>

  int main()
  {
      int n,i,j,k=1,s;

      scanf("%d",&n);
      s=n-1;
      for(i=1;i<=n*2;i++)
      {
          for(j=1;j<=s;j++)
          {
              printf(" ");
          }
          for(j=1;j<k*2;j++)
          {
              printf("*");
          }
          if(i<n){
              s--;
              k++;
          }
          else{
           s++;
           k--;
          }
          printf("\n");
      }

      return 0;
  }


  /******************************************************************************
@@@@@@@@@@
@@@@  @@@@
@@      @@
@        @
@        @
@@      @@
@@@    @@@
@@@@@@@@@@

  *******************************************************************************/
  #include <stdio.h>

  int main()
  {
      int i,j,l,k,s,n,t;

      scanf("%d",&n);
      s=n;
      for(i=1;i<=n;i++)
      {
          for(j=i;j<=n;j++)
          {
              printf("*");
          }

          for(j=1;j<=(2*i-2);j++)
              {
                  printf(" ");
              }

          for(j=i;j<=s;j++)
          {
              printf("*");
          }

          printf("\n");
      }

      for(i=1; i<=n; i++)
      {
          for(j=1;j<=i;j++)
          {
              printf("*");
          }
          for(j=(2*i-2);j<(2*n-2);j++)
          {
             printf(" ") ;
          }
          for(j=1;j<=i;j++)
          {
              printf("*");
          }
          printf("\n");
      }

      return 0;
  }

/*
  ********
    *******
      ******
        *****
          ****
            ***
              **
                *
              **
            ***
          ****
        *****
      ******
    *******
  ********
  */

  #include<stdio.h>

  void main()
  {
      int i,j,n,k=1,s=n;

      scanf("%d",&n);
      s=n;
      for(i=1;i<=(n*2)-1;i++)
      {
          for(j=1;j<k;j++)
          {
              printf("  ");
          }
          for(j=1;j<=s;j++)
          {
              printf("*");
          }
          if(i<n)
          {
              k++;
              s--;
          }
          else{

                  k--;
                  s++;

          }
          printf("\n");
      }
  }


  /******************************************************************************



 ***
*   *
*   *
*   *
 ***
*   *
*   *
*   *
 ***

  *******************************************************************************/
  #include <stdio.h>

  void main()
  {
    int i,j,size,k;

    scanf("%d",&size);
    k=(size*2)-1;

    for(i=1;i<size*2;i++)
    {
        for(j=1; j<=size; j++)
          {
              // Condition for corner and center intersection space
              if((i==1 && (j==1 || j==size)) ||
                 (i==size && (j==1 || j==size)) ||
                 (i==k && (j==1 || j==size)))
              {
                  printf(" ");
              }
              else if(i==1 || i==size || i==k || j==1 || j==size)
              {
                  printf("*");
              }
              else
              {
                  printf(" ");
              }
          }
          printf("\n");
    }

  }


  /******************************************************************************

  *****   *****
 ******* *******
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

*******************************************************************************/
#include <stdio.h>

void main()
{
  int i,j,size,t;

  scanf("%d",&size);
  t=size/2;

  for(i=3;i<=t;i++)
  {
    for(j=i;j<t;j++)
    {
        printf(" ");
    }
    for(j=1;j<=(i*2)-1;j++)
    {
        printf("*");
    }
    for(j=1;j<=(2*t-((2*i)-1));j++)
    {
        printf(" ");
    }
    for(j=1;j<=(i*2)-1;j++)
    {
        printf("*");
    }
    printf("\n");
  }

  for(i=1;i<=size;i++)
  {
      for(j=1;j<i;j++)
      {
          printf(" ");
      }
     for(j=1;j<=(2*size-(2*i-1));j++)
     {
         printf("*");
     }
      printf("\n");
  }

}
