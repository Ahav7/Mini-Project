#include <head.h>
void edit_score(float score,char playernm[100])
{
    system("cls");
        float sc;
        char nm[100];
        FILE *f;
        f=fopen("score.txt","r");
        fscanf(f,"%s%f",&nm,&sc);
        if(score >= sc)
        {
            sc=score;
            fclose(f);
            f=fopen("score.txt","w");
            //print playername
            fprintf(f,"%s\n%.2f",playernm,sc);
            fclose(f);
        }
}
