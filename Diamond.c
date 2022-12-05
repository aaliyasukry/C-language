#include<stdio.h>
int main(){
	int count,num,r;
   printf("Input number of rows: ");
   scanf("%d",&r);
   for(count=0;count<=r;count++)
   {
     for(num=1;num<=r-count;num++)
     printf(" ");
     for(num=1;num<=2*count-1;num++)
       printf("*");
     printf("\n");
   }
 
   for(count=r-1;count>=1;count--)
   {
     for(num=1;num<=r-count;num++)
     printf(" ");
     for(num=1;num<=2*count-1;num++)
       printf("*");
     printf("\n");
   }
   return 0;
}
