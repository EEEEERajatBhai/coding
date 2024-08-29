#include <stdio.h>

int main()

{
    int n = 22, i = 0, length;
    printf("Enter the length of arrey:\n");
    scanf("%d", &length);
    printf("Enter the arrey elements:\n") int A[length];
    while (i < length)
    {
        scanf("%d", &A[i]);
        i++;
    }
    printf("Enter the value of search:\n");
    scanf("%d", &n);
    i = 0;
    while (i < length && A[i] != n)
    {
        i += 1;
        if (i == length)
        {
            printf("unsuccessful search\n");
            return -1;
        }
        else
        {
            printf("successful search\n");
            return i + 1;
        }
    }
    return 0;
}