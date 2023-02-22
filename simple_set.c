#include <stdio.h>

int n = 10;
int a[10], x, y, a_bit[10], b[10], b_bit[10] = {0}, u[10], u_bit[10] = {0},uni[10]={0},inter[10]={0},diff[10]={0};

int main()
{
    printf("Enter the size of set U: ");
    scanf("%d", &n);

    printf("Enter the elements of set U: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &u[i]);
        u_bit[u[i]] = 1;
    }

    printf("Enter the size of set A: ");
    scanf("%d", &x);

    printf("Enter the elements of set A: ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
        a_bit[a[i]] = 1;
    }

    printf("\n");
    printf("Enter the size of set B: ");
    scanf("%d", &y);

    printf("Enter the elements of set B: ");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
        b_bit[b[i]] = 1;
    }

    printf("\nBit string representation of set U: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", u_bit[i]);
    }

    printf("\nUnion of sets A and B: ");
    for (int i = 0; i < n; i++)
    {
        if (a_bit[i] == 1 || b_bit[i] == 1)
        {
            uni[i]=1;
            printf("%d", 1);
        }
        else
        {
            uni[i]=0;
            printf("%d", 0);
        }
    }


     printf("\nintersection of sets A and B: ");
    for (int i = 0; i < n; i++)
    {
        if (a_bit[i] == 1 && b_bit[i] == 1)
        {
            inter[i]=1;
            printf("%d", 1);
        }
        else
        {
            inter[0];
            printf("%d", 0);
        }
    }

    printf("\ndifference of A-B\n");
    for(int i=0;i<n;i++)
    {
        if(a_bit[i]==1&&b_bit[i]==1)
        {
            diff[i]=0;
            printf("0\t");
        }
        else if(a_bit[i]==1 && b_bit[i]==0)
        {
            diff[i]=1;
            printf("1\t");
        }
        else
        {
            diff[i]=0;
            printf("0\t");
        }
    }

    return 0;
}
