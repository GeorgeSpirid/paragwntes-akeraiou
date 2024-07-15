#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<2)
        printf("Wrong input");
    else if (isPrime(n))
        printf("%d ", n);
    else
    {
        while(n>=2)
            for (int i=2;i<=n;i++)
                while(n%i==0)
                    if (isPrime(i))
                    {
                        n/=i;
                        printf("%d ", i);
                    }
    }
    return 0;
}

int isPrime(int number)
{
    for (int i=3; i<=number/2; i++)
        if (number%i==0)
            return 0;
    return 1;
}
