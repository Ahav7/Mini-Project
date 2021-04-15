#include "head.h"
void reset_score()
{
    system("cls");
    float sc;
        char nm[20];
        FILE *f;
        f=fopen("score.txt","r+");
        fscanf(f,"%s%f",&nm,&sc);
        sc=0;
        fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
}
