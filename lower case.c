#include<stdio.h>
int main()
{
    char name[50];
    int i;
    printf("\nenter your name :");
    scanf("%s", name);
    for(i=0;name[i]!='\0';i++)
    if(name[i]>=97 && name[i] <= 122)
    printf("%c", name[i]-32);
    else
    printf("%c", name[i]-32);
    return 0;
}
    