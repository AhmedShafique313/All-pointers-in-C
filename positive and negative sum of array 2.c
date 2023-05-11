#include<stdio.h>
int main()
{
   int a[100], n, i, psum=0, nsum=0, j, temp;

   printf("Enter array size [1-100]: ");
   scanf("%d",&n);
   printf("Enter %d elements: ",n);

   for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
     if(a[i]<0) nsum += a[i];
     else psum += a[i];
   }

   printf("All Positive numbers sum: %d",psum);
   printf("\nAll Negative numbers sum: %d",nsum);
   printf("\nTotal sum = %d", psum+nsum);

   for(i=0; i<n; i++) {
       for(j=i+1; j<n; j++) {
           if(a[j]< a[i]) {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   printf("\n elements of array are in ascending order: ");
   for(i=0; i<n; i++) {
       printf("%d", a[i]);
   }
   printf("\n\n");
   return 0;
}