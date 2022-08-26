#include <stdio.h>
#include <stdlib.h>

int main()
{   int x;
    printf("Please enter a number to check if even or odd\n");
    scanf("%d",&x);
    if (x%2 == 1)
    {
     printf("The number is odd = 1\n");
     printf("The number is even = 0");
    }
    else{
     printf("The number is odd = 0\n");
     printf("The number is even = 1");
    }

    return 0;
}
