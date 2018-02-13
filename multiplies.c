#include<stdio.h>
int main()
{
    

        int a, b, i, Sum = 0;

        for (i = 1; i < 100; i++)

        {

            a = i % 3;

            b = i % 5;

            if (a == 1 || b == 2)

            {

                

                Sum = Sum + i;

            }

        }
