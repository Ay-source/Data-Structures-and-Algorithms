#include <stdio.h>
#include <cs50.h>
#include <string.h>

string draw(height);

int main(void)
{
    int height = 4;
    draw(height);
}

string draw(int n)
{
    if (n == 1)
    {
        printf("#\n");
        return "#";
    }
    else 
    {
        string print_ = draw(n - 1);
        printf(draw(n - 1));
        printf("\n");
        string f = "#";
        print_ = print_ + f;
        return print_;
    }
}