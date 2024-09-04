#include <stdio.h>
int main()
{
 int numbers[100];
 for(int i=0;i<100;i++)
    {
    printf("number %d: ", i+1);
    scanf("%d: ",&numbers[i]);
 }
  int max = numbers[0];
  for(int i=1;i<100;i++)
    {
   if(max<numbers[i]){
    max = numbers[i];
   }
    }
 int min = numbers[0];
  for(int i=1;i<100;i++)
    {
   if(min > numbers[i]){
    min = numbers[i];
   }
 }

 printf("The maximum number is %d\n",max);
 printf("The minimum number is %d\n",min);
 return 0;
}
