#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct record
{
    char fio[32];
    char cat[32];
    char num[24];
    char inf[64];
};

#define row 3
struct record tab[row];


int main()
{
    for(int i= 0; i < row; i ++)
    {
        printf("[reord %d]\n", i);

        printf("fio: ");
        gets(tab[i].fio);
        
        printf("cat: ");
        gets(tab[i].cat);

        printf("num: ");
        gets(tab[i].num);

        printf("inf: ");
        gets(tab[i].inf);
    }

    printf("/n");
    for(int i = 0; i < row; i++)
    {
        printf("%s\t%s\t%s\t%s\n",tab[i].fio,tab[i].cat,tab[i].num,tab[i].inf);
    }

    printf("search: ");
    char fio[32];
    gets(fio);

    for(int i = 0; i < row;i++)
    {
        char *p = strtok(tab[i].fio, " ");
        if (strcmp(p, fio) == 0)
        
    }

    return 0;
}