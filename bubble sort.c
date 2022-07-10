#include <stdio.h>
#include <cs50.h>

#define MAX 37

int main(void)
{
    int array_[] = {4, 3, 7, 4, 8, 3, 7, 8, 3, 7, 2, 1, 9, 7, 6, 8, 4, 7, 4, 5, 2, 7, 43, 34, 23, 89, 32, 12, 45, 56, 67, 86, 66, 32, 89, 9, 2};
    bool swapping = false;
    int x; 
    int y;
    do
    {
        swapping = false;
        for (int j = 0; j < MAX; j++)
        {
            if (array_[j] > array_[j + 1])
            {
                swapping = true;
                x = array_[j];
                array_[j] = array_[j + 1];
                array_[j + 1] = x;
            }

        }
    } while(swapping);
    
    //Loop to print each element in the array
    for(int i = 0; i < MAX; i++)
    {
        printf("%i\n", array_[i]);
    }
    return 0;
}