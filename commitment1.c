//Student ID: 89221055
//Student: Anastasija Temova

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int current_floor=0;
    while(1>0)
    {
        int n;
        scanf("%d", &n);
        while(current_floor!=n)
        {
            if(n>5 || n<0)
            {
                printf("\nThe floor does not exist");
                break;
            }
            if(current_floor<n)
            {
                printf("\nThe elevator is on %d",current_floor);
                current_floor++;
            }
            else
            {
                printf("\nThe elevator is on %d",current_floor);
                current_floor--;
            }
        }
        if(n>5 || n<0)
        {
            printf("\nThe elevator did not reach the requested %d",n);
            printf(" floor ");
        }
        else
        {
            printf("\nThe elevator reached the requested %d",n);
            printf(" floor ");
        }

    }
    return 0;
}
