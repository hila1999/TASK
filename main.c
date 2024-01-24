
#include <stdio.h>
#include "NumClass.h"


int main (){
int low,high,prime,strong,armstrong,palindrome;
   scanf("%d %d", &low, &high);
   
    int i=0;
    printf("The Armstrong numbers are:");
    while (low <= high) {
    armstrong=isArmstrong(low);  
    if(armstrong==1)
    {printf("%d ",low);}
    low++;
    i++;
   }

   
   printf("\n");
     low=low-i;
    i=0;


    printf("The Palindromes are:");
    while (low <= high) {
    palindrome=isPalindrome(low);  
    if(palindrome==1)
    {printf("%d ",low);}
    low++;
    i++;
   }
   printf("\n");
    low=low-i;
    i=0;
   printf("The Prime numbers are:");
   while (low <= high) {
    prime=isPrime(low);
    if(prime==1)
    {printf("%d ",low);}
    
    low++;
    i++;
   }
    
   printf("\n");
   low=low-i;
    i=0;
    
    printf("The Strong numbers are:");
    while (low <= high) {
    strong=isStrong(low);  
    if(strong==1)
    {printf("%d ",low);}
    low++;
    i++;
   }
 
    

 

}
