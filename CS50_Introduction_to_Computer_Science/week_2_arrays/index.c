#include <stdio.h>
#include <cs50.h>
/*
*Create a program that prompt the user for a size, n.
*Dynamically create an array of that size,
*where each element is 2 times the previous one.
*Start the array at 1
*Print the array, integer by integer
*/
int main(void)
{
    int lenght;
    do
    {
    lenght = get_int("Length: ");
    }
    while (lenght < 1); // if the lenght is less than 1 i want to re-prompt

    //declare our array
    int twice[lenght];

    //set the first value
    twice[0] = 1;
    printf("%i\n", twice[0]);

    for(int i = 0 ; i < lenght ; i++ )
    {
    // Make the current element twice the previous
    twice[i] = 2 * twice[i - 1];
    //print the current element
    printf("%i\n", twice[i]);
 }
}
