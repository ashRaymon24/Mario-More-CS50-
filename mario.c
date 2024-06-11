#include <cs50.h>
#include <stdio.h>

void custom1(x, y)
{
    int count1 = y - x;
    int count2 = 0;
    while (count1 > 1)
    {
        printf(" ");
        count1--;
    }
    while (count2 <= x)
    {
        printf("#");
        count2++;
    }

}
void custom2(x)
{
    int count = 0;
    while (count <= x)
    {
        printf("#");
        count++;
    }

}
int main(void)
{
    int limit = 0;
    bool valid = false;
    while (valid == false)
    {
        limit = get_int("Enter a height between 1 and 8: \n");
        if (limit > 0)
        {
            valid = true;
        }
    }

    for (int i = 0; i < limit; i++)
    {
        custom1(i, limit);
        printf("  ");
        custom2(i);
        printf("\n");
    }

}

