#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
    long num;
    int score;
    struct student *next;
};
struct student *create()
{
    struct student *head=NULL,*p1,*p2;
    int n=0;
    p1=p2=(struct student *)malloc(LEN);
    scanf("%ld %d",&p1->num,&p1->score);
    while(p1->num!=0)
    {
        n+=1;
        if(n==1)
            head=p1;
        else
            p2->next=p1;
        p2=p1;p1=(struct student *)malloc(LEN);
        scanf("%ld %d",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return head;
}

void print(struct student *head)
{
    struct student *p;
    p=head;
    while(p!=NULL)
    {
        printf("%ld %d\n",p->num,p->score);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    struct student *head_a,*head_b,*p1,*p2,*p3;
    long num0;
    int score0;
    head_a=create();
    head_b=create();
    p1=head_a;
    while(p1->next!=NULL)
        p1=p1->next;
    p1->next=head_b;
    for(p1=head_a;p1->next!=NULL;p1=p1->next)
    {
        p3=p1;
        for(p2=p1->next;p2!=NULL;p2=p2->next)
            if(p3->num>p2->num)
            p3=p2;
        if(p1!=p3)
        {
            num0=p1->num;
            p1->num=p3->num;
            p3->num=num0;
            score0=p1->score;
            p1->score=p3->score;
            p3->score=score0;
        }
    }
    print(head_a);
    return 0;
}
