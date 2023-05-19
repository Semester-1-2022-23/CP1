/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
The first six prime numbers are 2, 3, 5, 7, 11, and 13. Write a C programming to compute for the
1001st prime number?*/
#include<stdio.h>

int is_prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
void check_prime(int n){
    int dCount=0, dPrime=0;
    while(dCount<n){
        for(int i=2; dCount<n; i++){
            if(is_prime(i)==1){
                dCount++;
                dPrime=i;
            }
        }
    }
    printf("%d\n", dPrime);
}

int main()
{
    int dCheck;
    printf("Enter a number: ");
    scanf("%d", &dCheck);

    check_prime(dCheck);

    return 0;
}