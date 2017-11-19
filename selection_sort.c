#include <stdio.h>

int main()
{
    int array[5], n, count, d, position, swap;
    
    array[0] = 5;
    array[1] = 3;
    array[2] = 7;
    array[3] = 10;
    array[4] = 4;
    
    for (count=0;count<(n-1);count++)
    {
        position = count;
 
        for (d=count+1;d<n;d++)
        {
            if (array[position]>array[d])
                position = d;
        }
        if (position!=count)
        {
            swap = array[count];
            array[count] = array[position];
            array[position] = swap;
        }
    }
    for (count=0;count<n;count++)
        printf("%d\n", array[count]);

    return 0;
}




