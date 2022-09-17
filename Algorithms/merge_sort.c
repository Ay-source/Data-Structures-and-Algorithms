//1. Divide till loop number of elements remains 1
//2. a

#include <stdio.h>

void merge_sort(int initial_length, int array_length, int array_[], int erray[]);
#define MAX 37

int main(void)
{
    int array_[] = {4, 3, 7, 4, 8, 3, 7, 8, 3, 7, 2, 1, 9, 7, 6, 8, 4, 7, 4, 5, 2, 7, 43, 34, 23, 89, 32, 12, 45, 56, 67, 86, 66, 32, 89, 9, 2}; 
    int max_length = 37;
    int erray[MAX];
    merge_sort(0, max_length, array_, erray);
    
    //print the sorted array
    for (int i = 0; i < MAX; i++)
    {
        printf("%i\n", array_[i]);
    }
    return 0;
}

void merge_sort(int initial_length, int array_length, int array_[], int erray[])
{
    if (initial_length >= array_length)
    {
        return;
    }
    //midpoint of the array also len of left
    int mid = (initial_length + array_length) / 2;

    //recursively calls each one of these till only one number is left
    merge_sort(initial_length, mid, array_, erray);
    merge_sort(mid + 1, array_length, array_, erray);

    int pointer_left = initial_length;

    //length of the right subarray
    int len_right = mid + 1;

    //Sort the mini arrays
    for(int i = 0; i < array_length; i++)
    {
        if (array_[pointer_left] <= array_[len_right])
        {
            erray[pointer_left] = array_[pointer_left];
            pointer_left++;
        }
        else if (array_[len_right] < array_[pointer_left])
        {
            erray[i] = array_[len_right];
            len_right++;
        }
        else if (pointer_left == mid + 1)
        {
            erray[i] = array_[len_right];
            len_right++;
        }
        else
        {
            erray[i] = array_[pointer_left];
            pointer_left++;
        }
    }

    //sort the array
    for (int i = 0; i < array_length; i++)
    {
        array_[i] = erray[i];
    }

    //print the sorted array
    for (int i = 0; i < MAX; i++)
    {
        printf("%i\n", array_[i]);
    }
}