#include <stdio.h>
//#include <cs50.h>
#include <stdlib.h>

#define MAX 37
void sort_(int *array_, int length_);

int main(void)
{
    int array_[] = {4, 3, 7, 4, 8, 3, 7, 8, 3, 7, 2, 1, 9, 7, 6, 8, 4, 7, 4, 5, 2, 7, 43, 34, 23, 89, 32, 12, 45, 56, 67, 86, 66, 32, 89, 9, 2}; 
    //int *p = malloc(sizeof(int) * MAX);
    sort_(array_, MAX);
    /*
    for (int i = 0; i < MAX; i++)
    {
        printf("%i\n", p[i]);
    }*/
    //free(p);
}

void sort_(int *array_, int length_)
{
    //returns the array if the length of the array is 1
    if (length_ == 1)
    {
        return;
    }
    else
    {
        int length1_ = length_ / 2;
        int length2_ = length_ - length1_;
        int arraya_[length1_];
        int arrayb_[length2_];
        for (int i = 0, j = 0; i < length_; i++)
        {
            if (i < length2_)
            {
                arraya_[i] = array_[i];
            }
            else 
            {
                arrayb_[j] = array_[i];
                j++;
            }
        }

        //recursively calls the sort function until it remains one elment in the array
        sort_(arraya_, length1_);
        sort_(arrayb_, length2_);

        //merges the left and right sorted arrays
        for (int k = 0, j = 0, m = 0; k < length_; k++)
        {
            if ((k/2) < length2_)
            {
                if (arraya_[m] <= arrayb_[j])
                {
                    array_[k] = arraya_[m];
                    m++;
                }
                else
                {                    
                    array_[k] = arrayb_[j];
                    j++;
                }
            }
            else 
            {
                array_[k] = arrayb_[j + 1];
            }
        }

        for (int i = 0; i < MAX; i++)
        {
            printf("%i", array_[i]);
        }
        printf("\n");
        return;
    }
}