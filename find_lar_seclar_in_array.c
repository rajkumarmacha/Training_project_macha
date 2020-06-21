
#include <stdio.h>
void main()
{
  int a[]={15,6,45,65,235,1,83,5,75};
  
  int larg = 0;
  int sec_lar;
  int size = sizeof(a)/sizeof(a[0]);
  printf("%d\n",size);
  int i=0;
  for(i=0;i<size;i++)
  {
      if(a[i] > larg) 
      {
          sec_lar = larg;
          larg = a[i];
      }
      else if(a[i] > sec_lar)
      {
           sec_lar = a[i];
      }
      
  }

printf("large:%d\n",larg);
printf("sec_large:%d\n",sec_lar);
}

