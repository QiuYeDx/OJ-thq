#include<stdio.h>
struct Student
{
    char id[20];
    char name[30];
    int g1;
    int g2;
    int g3;
};

int input(struct Student *s,int N,int *sum_s_1,int *sum_s_2,int *sum_s_3)
{
    int i;
    int i_max=0;
    int max_sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%s%s%d%d%d",&s[i].id,&s[i].name,&s[i].g1,&s[i].g2,&s[i].g3);
        *sum_s_1+=s[i].g1;
        *sum_s_2+=s[i].g2;
        *sum_s_3+=s[i].g3;
        if((s[i].g1+s[i].g2+s[i].g3)>max_sum)
        {
            max_sum=s[i].g1+s[i].g2+s[i].g3;
            i_max=i;
        }
    }
    return i_max;
}

int main()
{
    int i_max=0;
    struct Student s[100];
    int sum_score_1=0;
    int sum_score_2=0;
    int sum_score_3=0;
    int N=0;
    int ave_1,ave_2,ave_3;

    scanf("%d",&N);
    i_max=input(s,N,&sum_score_1,&sum_score_2,&sum_score_3);
    ave_1=sum_score_1/N;
    ave_2=sum_score_2/N;
    ave_3=sum_score_3/N;
    printf("%d %d %d\n",ave_1,ave_2,ave_3);
    printf("%s %s %d %d %d",s[i_max].id,s[i_max].name,s[i_max].g1,s[i_max].g2,s[i_max].g3);
    return 0;
}
