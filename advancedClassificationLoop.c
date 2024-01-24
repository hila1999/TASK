#include "NumClass.h"

int   isPalindrome(int n){
    int r, sum=0,temp;
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (sum==temp)
    {
        return 1;
    }
    else return 0;
}

int power(int number ,int power){

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
int isArmstrong (int x){
int n=order(x);
  int temp = x, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power(r, n);
        temp = temp / 10;
    }
 
    // If satisfies Armstrong condition
    if (sum == x)
        return 1;
    else
        return 0;
}
