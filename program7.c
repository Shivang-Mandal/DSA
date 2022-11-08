#include <stdio.h>
int main()
{
    //Initialize array
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;


    //Loop through the array to calculate sum of elements
    for (int i = 0; i < 5; i++) {
       sum = sum + arr[i];
    }
    printf("Sum of all the elements of an array: %d", sum);
    return 0;
}
