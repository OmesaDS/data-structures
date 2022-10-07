#include <stdio.h>
int main()
 {
  int n;
  printf("ENTER THE ELEMENTS YOU WANT: ");
  scanf("%d", &n);
  int arr[n];
  printf("ENNTER %d ELEMENTS IN THE ARRAY: ",n);
  for(int i=0;i<n;i++) 
  {
   scanf("%d",&arr[i]);
  }
  printf("EVEN NUMBERS: ");
  for(int i=0;i<n;i++) 
  {
  if(arr[i]%2==0)
  printf("%d ", arr[i]);
 } 
  printf("\nODD NUMBERS: ");
  for(int i=0;i<n;i++)
   {
  if(arr[i]%2==1)
  printf("%d ", arr[i]);
   }
   return 0;
}