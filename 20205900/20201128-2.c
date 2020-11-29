#include<stdio.h>
struct Inform
{
    char id[20];
    char name[30];
    int score1;
    int score2;
    int score3;
}inform;

void input(struct Inform *m,int i)
{
    scanf("%s%s%d%d%d",&m[i].id,&m[i].name,&m[i].score1,&m[i].score2,&m[i].score3);
}

void output(struct Inform *m,int i)
{
    printf("%s,%s,%d,%d,%d\n",m[i].id,m[i].name,m[i].score1,m[i].score2,m[i].score3);
}

int main()
{
    int N;
    int i;
    struct Inform m[100];

    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       input(m,i);
       output(m,i);
    }
    return 0;
}
