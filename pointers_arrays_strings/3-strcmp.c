#include "main.h"

/**
 * _strcmp - compare s1 and s2 base on the ASCII value of the characters in the string
 * @s1: string 1
 * @s2: input string 2
 * Return: 0 if equal, negative if s1 < s2, positive if s2 < s1
 */

int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }

    return s1[i] - s2[i];
}
