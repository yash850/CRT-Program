#include<stdio.h>
int main()
{
    int a[5];
    int i;
    printf("\nenter 5 numbers :\n");
    for(i=0; i<5; i++)
    scanf("%d", &a[i]);
    puts("\nreverse list is :");
    for(i=4 ; i>=0 ; i--)
    {
        printf(" %d", a[i]);
    }
    return 0;
}