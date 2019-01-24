#include<stdio.h>
#include<math.h>
void decimal_binary(int);
void binary_decimal(int);
void main()
{
    int num, ch;
    do
    {
        printf("\n\nChoose one of the follwing conversions: ");
        printf("\n1. Decimal to Binary");
        printf("\n2. Binary to Decimal");
        printf("\n3. Exit");
        printf("\n\nEnter your choice(1-3): ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("\nEnter a decimal number: ");
                    scanf("%d", &num);
                    decimal_binary(num);
                    break;
            case 2: printf("\nEnter a binary number: ");
                    scanf("%d", &num);
                    binary_decimal(num);
                    break;
            case 3: exit(0);
            default: printf("\nINVALID ENTRY!!!");
        }
    }while(ch);
}
void decimal_binary(int n)
{
    int a[20], i, j;
    for(i=0; n>0; i++, n=n/2)
        a[i]=n%2;
    printf("\nIts binary equivalent is ");
    for(j=i-1; j>=0; j--)
        printf("%d ", a[j]);
}
void binary_decimal(int n)
{
    int no=0, i=0;
    while(n)
    {
        no+=(n%10)*pow(2, i);
        n=n/10;
        i++;
    }
    printf("\nIts decimal equivalent is %d", no);
}










