#include <stdio.h>


int recursiveMaximum(int array[], int size) {
    if (size == 1) {
        return array[0]; 
    }
    int i,maxvalue=0;
    for (i = 0; i <= size-1; i++)
    {
        if (array[i] > maxvalue)
            maxvalue = array[i];
    }
    return maxvalue; 
}

int main() {
    int array[] = { 2, 8, 3, 5, 7, 9, 10 };
    int size = sizeof(array) / sizeof(array[0]);

    int max =recursiveMaximum(array, size);

    printf("陣列中的最大值為: %d\n", max);

    return 0;
}
