#include <stdio.h>

// Function to check if a number is a perfect number or not
void ifperfect(int *num)
{
    int hcf_sum = 0;
    for (int i = 1; i < (*num); i++)
    {
        if ((*num) % i == 0)
        {
            hcf_sum += i;
        }
    }
    if (hcf_sum == (*num))
    {
        printf("Perfect number.\n");
    }
    else
    {
        printf("Not a perfect number.\n");
    }
}

int main()
{
    // Taking input from user
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // Checking if the entered number is a perfect number or not
    ifperfect(&n);
    
    return 0;
}

// Output:
// Enter a number : 496
// Perfect number.