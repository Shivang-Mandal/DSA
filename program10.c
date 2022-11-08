#include<stdio.h>
int main()
{
//fill your code
int n;
printf("Enter the Size of Array:- ");
scanf("%d",&n);
int arr[n];

printf("Enter Elements:- ");

for(int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}

int count_odd =0, count_even = 0;
for(int i = 0; i < n; i++)
{
    if(arr[i] % 2 == 0)
    {
     count_even++;
    }
    else
    {
     count_odd++;
    }
}
printf("Odd: %d",count_odd);
printf("\nEven: %d",count_even);
return 0;
}


