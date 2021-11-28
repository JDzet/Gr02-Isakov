#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define max_txt 256

int main()
{
    FILE *f1 = fopen("F1e20.txt", "r");
    FILE *f2 = fopen("F1e20-out.txt", "w+");

    int m = 0;
    char p[max_txt];
    int l;

    while(1)
    {
        char s[max_txt];
        if (fgets(s, max_txt, f1) == NULL) break;

        char *c = strchr(s,'\n');
        if (c != NULL) *c = '\0';

        l = strlen(s);

        printf("str = %s\n", s); 
        printf("lem = %d\n", l);

        if(l > m)
        {
            m = l;
            strcpy(p, s);
        }
        
    }

    printf("\n");
    printf("Самая длинная строка:\n");
    printf("str = %s\n", p); 
    printf("lem = %d\n", m);

    fclose(f1);

    f1 = fopen("F1e20.txt", "r");

    while(1)
    {
        char s[max_txt];
        if (fgets(s, max_txt, f1) == NULL) break;

        char *c = strchr(s,'\n');
        if (c != NULL) *c = '\0';

        l = strlen(s);

        printf("str = %s\n", s); 
        printf("lem = %d\n", l);

        if(l > m)
        {
            m = l;
            strcpy(p, s);
        }
        

        if(l < m)
        {
            int f = m - l;
            for(int i = 0; i < f; i++)
            {
               strcat (s, "*");
            }
            
        }
        fprintf(f2,"%s (Количеcтво символов: %d)\n",s, l);
    }


    printf("\n");
    printf("Самая длинная строка:\n");
    printf("str = %s\n", p); 
    printf("lem = %d\n", m);

    fclose(f1);
    fclose(f2);

    return 0;
}