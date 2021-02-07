#include<stdio.h>

int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("The multiplication table of %d is\n",num);
    

    for(int i=1; i<11; i++)
    {
        printf("%d × %d=%d\n",num,i,num*i);
    }
    return 0;
}