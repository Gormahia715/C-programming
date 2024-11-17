int scores[2][2] = {
    {value1, value2},
    {value3, value4}
};

To help you with this, I'll break down each step:

i. Define an Array Data Structure
In C, an array is a collection of elements, all of the same type, stored in contiguous memory locations. It can be a single-dimensional array (like a list) or a multi-dimensional array (like a matrix).

ii. Declare and Initialize a 2D Array
To declare and initialize a 2D array named scores with 2 rows and 2 columns, you can use the following code:

c
Copy code
int scores[2][2] = {
    {value1, value2},
    {value3, value4}
};
Replace value1, value2, value3, and value4 with the values you want to initialize the array with.

iii. Print the Elements Using a Nested for Loop
To print each element of the scores array, you can use a nested for loop:

c
Copy code
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {value1, value2},
        {value3, value4}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
