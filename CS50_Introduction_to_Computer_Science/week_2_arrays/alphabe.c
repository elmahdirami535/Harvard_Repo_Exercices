#include <stdio.h>
#include <cs50.h>
#include <string.h>

/*
*Check if a lowercase string's characters are in alphabetical order.
*if yes , print "YES".
*if no print "No".
*/
int main(void)
{
    string word = get_string("word: ");

    int word_lenght = strlen(word);
    for (int i = 0; i < word_lenght - 1; i++)
    {
        //check if not alphabetical (i.e., "ba")
        if (word[i] > word[i + 1])
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
