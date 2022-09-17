#include <stdio.h>

#define MAX 37

int main(void)
{
    int number;
    int x;
    //Array to sort
    int array_[] = {4, 3, 7, 4, 8, 3, 7, 8, 3, 7, 2, 1, 9, 7, 6, 8, 4, 7, 4, 5, 2, 7, 43, 34, 23, 89, 32, 12, 45, 56, 67, 86, 66, 32, 89, 9, 2};

    //Loop for each element in array[]
    for(int i = 0; i < MAX; i++)
    {
        //Loop to compare each element to every other element
        for(int j = i; j < MAX; j++)
        {
            if (array_[j] < array_[i])
            {
                number = array_[j];
                x = array_[i];
                array_[i] = number;
                array_[j] = x;
            }
        }
    }

    //Loop to print each element in the array
    for(int i = 0; i < MAX; i++)
    {
        printf("%i\n", array_[i]);
    }
    return 0;
}
/*
int main(void)
{
    char *s = "rft";
    for(int i = 0; ; i++)
    {
        if (strcmp(((*s + (i - 1)) == "\n")))
        {
            printf("None");
        }
    }
}*/