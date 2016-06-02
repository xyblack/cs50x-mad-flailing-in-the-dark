#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n = 0;
    printf("height: ");
    n = GetInt();
                                // check whether entered height is within aloowed margin
    if (n < 0 || n > 23)
    {
        do
        {
            printf("Retry: ");
            n = GetInt();
            
        }
        while (n < 0 && n > 23);
    }
    
    if (n>=0 && n<=23)
        {

            for(int i=0; i<n; i++)
            {
                int count;
                                // For each row i you have to insert "count" spaces
                for (count = 0 ; count < n - 1 - i ; count++)
                    printf(" ");
                                // For each row i you have to insert "count" sharp characters
                for (count = 0 ; count < i + 2; count++)
                    printf("#");
                                // a new line character for the next loop iteration
                printf("\n");
        }
    }
    
    
    return 0;
}
