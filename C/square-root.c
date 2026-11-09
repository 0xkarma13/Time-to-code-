#include <stdio.h>
#include <stdbool.h> 
#include <math.h> // for sqrt the same square root



bool is_prime(int num)
{
    for (int i = sqrt(num); i > 1; i--) // I'll start from the root and work my way down
    {    
        if (num % i == 0)
        {
            return false;
        }
    return true;
    }
}



int main()
{
    int res;
    printf("Give me a number: ");
    scanf("%d", &res);

    printf("%d\n", is_prime(res)); // 0 means false and 1 means 1
    return 0;
}
