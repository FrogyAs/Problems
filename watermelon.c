#include <stdio.h>
#include <stdlib.h>

int eh_par(int weightwatermelon);
int eh_dois(int weightwatermelon);

int main()
{
    int weightmelon, if_weight_is_divide_by_two;
    scanf("%d", &weightmelon);

    if (eh_par(weightmelon))
    {
        if (eh_dois(weightmelon))
        {
            printf("NO");
            return EXIT_SUCCESS;
        }
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}

int eh_par(int weightwatermelon)
{
    if (weightwatermelon % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int eh_dois(int weighwatermelon)
{
    if (weighwatermelon == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
