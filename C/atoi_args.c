#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 1;
    
    int res = atoi(argv[1]); // atoi Converts a strign to a numebr 

    printf("Numebr is: %d\n", res);
    
    return 0;
}

