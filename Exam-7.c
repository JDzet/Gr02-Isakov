#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

float av(float x, float z)
{
 float y;
 y = x / z;
 return(y);
}

int main()
{
    int N;
    printf("Введите количество оценок: ");
    scanf("%d", &N);

    int *a;
    float sum;
    a = (int*)malloc(N * sizeof(int));
    

    printf("Введите оценки: ");
    for(int i = 0; i < N; i++)
    {
     scanf("%d", &a[i]);

     if (a[i] > 5 || a[i] < 2)
     {
      printf("Некорректно введены данные");   
      return 0;
     }
     sum += a[i];
    }

    float avg = av(sum, N);
    printf ("Средний балл ученика: %.1f\n",avg);

    if(avg >= 4.6)
    printf("Ученик сможет поступить в данный универ\n");
    else
    printf("Ученик не сможет поступить в данный универ\n");

    return 0;
}