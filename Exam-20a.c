#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define max_txt 256

int main()
{
    FILE *f = fopen("F1e20.txt", "r");

    int m = 0;
    char p[max_txt];

    while(1)
    {
        char s[max_txt];
        if (fgets(s, max_txt, f) == NULL) break;

        char *c = strchr(s,'\n');
        if (c != NULL) *c = '\0';

        int l = strlen(s);
        if(l > m)
        {
            m = l;
            strcpy(p, s);
           
        }
        

    }
 
    printf("str = %s\n", p); 
    printf("lem = %d\n", m);

    fclose(f);

    return 0;
}