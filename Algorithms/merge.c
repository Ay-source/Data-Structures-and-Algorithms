#include <stdio.h>

void merge_sort(int first, int last, int array[], int new[]);
void merger(int first, int mid, int right, int last, int array[], int new[]);

int main(void)
{
    int array[] = {3, 4, 6, 8, 8, 4, 3, 6, 4, 7, 3, 78, 43, 3, 0};
    int first = 0;
    int last = 15;
    int new[last];
    merge_sort(0, 15, array, new);

    for (int i = 0; i < last; i++)
    {
        printf("%i\n", new[i]);
    }
}

void merge_sort(int first, int last, int array[], int new[])
{
    //Base case
    if ((last - first) <= 1)
    {
        return;
    }

    int mid = (first + last) / 2;
    int right = mid + 1;


    //sort the left array
    merge_sort(first, mid, array, new);
    //sort the right array
    merge_sort(mid, last, array, new);

    //merges the sorted left and right and array in a sorted order
    merger(first, mid, right, last, array, new);
}

void merger(int first, int mid, int right, int last, int array[], int new[])
{
    int j = last;
    int l = first;
    for (int i = first, k = mid; i < last; i++)
    {
        if ((array[first] <= array[mid] || mid == last) && first != k)
        {
            new[i] = array[first];
            first++;
        }
        else if ((array[first] > array[mid] || first == mid) && mid != last)
        {
            new[i] = array[mid];
            mid++;
        }
    }

    //Assign new sorted array to old array
    for (int i = l; i < j; i++)
    {
        array[i] = new[i];
    }
    return;
}