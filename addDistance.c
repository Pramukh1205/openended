#include <stdio.h>

typedef struct
{
    int feet;
    int inch;
}distance;

void addDistance(distance d1, distance d2)
{
    distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;

    d3.feet += (d3.inch / 12);
    d3.inch = d3.inch % 12;

    printf("\nTotal distance= %dft %din\n", d3.feet, d3.inch);
    int n=0,i;
    while(d3.feet!=0)
    {
        d3.feet/=10;
        n++;
    }
    printf("                ");
    for(i=0;i<n;i++)
    {
     printf("-");
    }

    printf("------");
    if(d3.inch==10 || d3.inch==11)
        printf("-");
}

void main()
{
    distance d1, d2;

    printf("Enter first distance in feet & inches:");
    scanf("%d%d", &d1.feet, &d1.inch);
    printf("--------------------------------------\n");

    printf("Enter second distance in feet & inches:");
    scanf("%d%d", &d2.feet, &d2.inch);
    printf("--------------------------------------\n");

    addDistance(d1, d2);

}
