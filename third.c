#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
void isPalindrome(unsigned short n)//unsigned int
{

unsigned short binaryNum[16];//int
for(unsigned short i=0; i<16; i++)//int
{
   binaryNum[i]=0;
}
// counter for binary array
unsigned short i = 0;//int
while (n > 0) {
  
// storing remainder in binary array
binaryNum[15-i] = n % 2;
n = n / 2;
i++;
}
for(unsigned short v=0; v<16; v++)//int
{
   if(binaryNum[v]!=binaryNum[15-v])
   {
       printf("Not-Palindrome \n");
       return;
       }
   }
   printf("Is-Palindrome \n");
}
  
// Driver program to test above function
int main(int argc, char* argv[])
{
//unsigned int n = *argv[1];
//scanf("%d", &n);
unsigned short a=atoi(argv[1]);//int
//printf("%d", a);
isPalindrome(a);
//isPalindrome(1001);
return 0;
}
