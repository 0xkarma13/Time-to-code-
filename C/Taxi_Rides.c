/*
Taxi Rides
In this challenge, we need to count the number of good taxi rides.
A ride is considered good if exactly two out of the three back seats are occupied.
The input contains n rides, and each ride has three values (0 or 1).
We use a for loop to check each ride and an if statement to count the good ones.
Finally, we print the total number of good rides.
اگر توی خورجی ها حمع شد ۲ باید ۱ چاپ کنی 
*/

#include <stdio.h>

int main()
{
    int res;
    int result = 0;
    scanf("%d", &res);

    int a, b, c;
    for (int i = 0; i < res ; i++)
        {
            scanf("%d %d %d", &a, &b, &c);
            if (a + b + c == 2)
            {
                result++;
                printf("%d", result);
            } 
        }

    return 0;
}
