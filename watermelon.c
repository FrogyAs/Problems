#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weightmelon, if_weight_is_divide_by_two;
    scanf("%d", &weightmelon);

    if (weightmelon == 2)
    {
        printf("NO");
        return EXIT_SUCCESS;
    }

    if (weightmelon % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
