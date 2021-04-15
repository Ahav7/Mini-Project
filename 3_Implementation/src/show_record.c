#include "head.h"
void show_record()
{
    char name[100];
    float scr=0;
    FILE *f;
    f=fopen("score.txt",r);
    fscanf(f,"%s%f",&name,&scr);
    printf("\n\n\t\t**********************************************************");
    printf("\n\n\t\t %s has secured the highest score %f",name,scr);
    printf("\n\n\t\t**********************************************************");
    fclose(f);
    getch();
}
