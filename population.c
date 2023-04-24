#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years = 0;

    // TODO: Prompt for start size
    do
    {
        start = get_int("Start size: ");
        if (start < 9)
        {
            // Error handling
            printf("Start size must be at least 9. Try again!\n");
        }
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
        if (end < start)
        {
            // Error handling
            printf("End size must be greater than start size. Try again!\n");
        }
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        ++years;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}