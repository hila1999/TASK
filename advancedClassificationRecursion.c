#include "NumClass.h"


int reverseNumber(int number, int rev_num)
{
    // base condition
    if(number <= 0)
    {
        return rev_num;
    }
    
    // get remender and update 'rev_num'
    rev_num = (rev_num * 10) + (number % 10);
 
    // make a recursive call to 'reverseNumber'
    return reverseNumber(number/10, rev_num);
}
int isPalindrome(int number)
{
    if(number == reverseNumber(number, 0))
    {
        // Number is palindrome.
        // We can also return 'bool', use 'stdbool.h'
        return 1;
    }
    // Not palindrome
    return 0;
}
int isArmstrong (int x){
if(x == check_ArmstrongNumber(x))
return 1;
else
return 0;
}
int check_ArmstrongNumber(int num)
{
    if(num>0)
    return (power((num%10),3) + check_ArmstrongNumber(num/10));
   else return 0;
}
int power(int n ,int s){

    int ans=n;
    while(s>1){
    ans=ans*n;
    s--;
    }
}