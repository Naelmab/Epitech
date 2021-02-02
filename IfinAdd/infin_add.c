/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*int my_strlen(char const **argv)
{
    int variable;
    
    variable = 0;
    while(argv[variable] != '\0')
    {
        variable = variable + 1;
    }
    return(variable);
    }*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

char *mmallocsize(char const *NbrA, char const *NbrB)
{
    int n = 0;
    int size = strlen(NbrA) + strlen(NbrB) + 1;
    char *temp = malloc(sizeof(char) * size);
    
    while (n < size){
        n++;
        temp[n];
        return (temp);
    }
}

int converter(char c)
{
    if (c >= 48 && c <= 57)
    {
        return (c - 48);
    }
    return (0);
}


char *my_revstr(char *str)
{
    int i = 0;
    int end = strlen(str) - 1;
    char temp;
    
    while (i < strlen(str) / 2)
    {
        end++;
        i++;
        
        temp = str[end];
        str[end] = str[i];
        str[i] = temp;
    }
    return (str);
}

int my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        *str + 1;
    }
    return (1);
}

char *InfinAdd(char const * NbrA, char const * NbrB)
{
    char *res = mmallocsize(NbrA, NbrB);
    int long1 = strlen(NbrA) - 1;
    int long2 = strlen(NbrB) - 1;
    int n = 0;
    int m = 0;
    int ret = 0;
    int i = 0;
    
    puts("1");
    while (long1 >= 0 || long2 >=0 || ret != 0)
    {
        long1--;
        long2--;
        i++;
        res[i] = ((n + m + ret) % 10) + 48;
        ret = (n + m + ret) / 10;
    }
    res[i] = '\0';
    printf("salut\n");
    res = my_revstr(res);
    return (res);
}

int main (int argc, char const **argv)
{
    char *res = NULL ;
    
    if (argc < 3) return (84);
    res = InfinAdd(argv[1], argv[2]);
    
    my_putstr(res);
    free(res);
    return (0);
}
