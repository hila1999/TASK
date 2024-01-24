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

int power1(int number ,int power){

    int ans=1;
    if (power < 0) {
       ans = 1 / number;
        power = -power;
    }
    for (int i = 0; i <power; i++)
    {
    ans*=number;
    }
    return ans;
 }

int order(int x)
{
    int n = 0;
    while (x) {
        x = x / 10;
        n++;
    }
    return n;
}
int check_ArmstrongNumber(int num,int size)
{
    if(num>0)
    return (power1((num%10),size) + check_ArmstrongNumber(num/10,size));
    return 0;
}
int isArmstrong (int x){
    int size=order(x);
if(x == check_ArmstrongNumber(x,size))
return 1;
else
return 0;
}


