#include <stdio.h>
#include <cs50.h>

#define MAX 37
int s[MAX];
int * sort_(int *array_, int length_);

int main(void)
{
    int array_[] = {4, 3, 7, 4, 8, 3, 7, 8, 3, 7, 2, 1, 9, 7, 6, 8, 4, 7, 4, 5, 2, 7, 43, 34, 23, 89, 32, 12, 45, 56, 67, 86, 66, 32, 89, 9, 2}; 
    int *p = array_;
    p = sort_(array_, MAX);
    printf("Arraynow");
    for (int i = 0; i < MAX; i++)
    {
        printf("%i\n", p[i]);
    }
    printf("Array");
    for (int i = 0; i < MAX; i++)
    {
        printf("%i\n", array_[i]);
    }
}

int * sort_(int *array_, int length_)
{
    printf("length is %i", length_);
    if (length_ == 1)
    {
        return array_;
    }
    else
    {
        //int new_array[length_];
        int length1_ = length_ / 2;
        int length2_ = length_ - length1_;
        int arraya_[length1_];
        int arrayb_[length_-length1_];
        int j = 0;
        for (int i = 0; i < length_; i++)
        {
            if (i < length1_)
            {
                arraya_[i] = array_[i];
            }
            else 
            {
                arrayb_[j] = array_[i];
                j++;
            }
        }
        int *array1_ = sort_(arraya_, length1_);
        int *array2_ = sort_(arrayb_, length2_);
        printf("\n\nArrayleft");
        for (int i = 0; i < length1_; i++)
        {
            printf("%i", array1_[i]);
        }
        printf("\n\n");
        printf("\n\nArrayright");
        for (int i = 0; i < (length2_); i++)
        {
            printf("%i", array2_[i]);
        }
        printf("\n\n");
        int m = 0;
        j = 0;
        //merger
        for (int k = 0; k < length_; k++)
        {
            if ((k - k/2) <= length1_)
            {
                if (array1_[m] <= array2_[j])
                {
                    s[k] = array1_[m];
                    m++;
                }
                else //if (array1_[i] > array2_[j])
                {
                    printf("%i", array2_[j]);
                    s[k] = array2_[j];
                    printf("loop");
                    j++;
                }
            }
            else 
            {
                s[k] = array2_[j];
            }
            printf("new_array %i\n", *(s + k));
        }
        //s = &new_array[0];
        printf("\n\nArray");
        for (int i = 0; i < length_; i++)
        {
            printf("%i", array_[i]);
        }
        printf("\n\n");
        printf("s is ");
        for (int i = 0; i < length_; i++)
        {
        printf("%i", s[i]);
        }
        printf("\n");
        printf("returned");
        return s;
    }
}