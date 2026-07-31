#include <stdio.h>

int main()
{
    // int age[10];
    int age[10] = {0};
    printf("%d",sizeof(age));


    age[0] = 33;
    age[1] = 26;
    printf("%d\n", age[0]);

    age[1] = 99;
    printf("%d\n", age[0]);

    scanf("%d", &age[2]);
    int size = sizeof(age) / sizeof(age[0]); // Array Size
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ", age[i]);
    }

    return 0;
}