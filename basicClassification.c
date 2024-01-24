
#include "NumClass.h"

int isPrime(int n1){
    int i=2;
    while ((i<=n1/2))
    {
        if(n1%i==0) 
        return 0;
        else
        i++;
    }
    return 1;
}

int fact(int n) {
  int f = 1;
  for (int i = 1; i <= n; i++) {
    f *= i;
  }
  return f ;
}
int isStrong(int n){
  int num = n;
  int sum = 0;
  int temp;
  while (n != 0) {
    temp = n % 10;
    sum += fact(temp);
    n /= 10;
  }
  //check the condition
  if (sum == num) {
    // return 1 if it is a strong number
    return 1;
  } else {
    // return 0 if it not a strong number
    return 0;
     }
}