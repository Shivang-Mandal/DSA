#include<stdio.h>



int main()
{

    int s;
    printf("Enter the size of Array:- ");
    scanf("%d",&s);
    int a[s], i, count = 0;

    printf("Enter %d elements(0 or 1)\n", s);
    for(i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] == 0)
        {
            count++;
        }
    }

    for(i = 0; i < s; i++)
    {
        if(i < count)
            a[i] = 0;
        else
            a[i] = 1;
    }

    printf("\nArray after segregating o's to left and 1's to right\n");
    for(i = 0; i < s; i++)
        printf("%d ", a[i]);


    return 0;
}
