#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int c;
    int e;
    struct node *nxt;
}node;
node *poly1;
cp(node *ptr)
{
    while(1){
        node *pol;
        pol=(node*)malloc(sizeof(node));
        printf("c e");
        scanf("%d %d",&pol->c,&pol->e);
        pol->nxt=NULL;
        if (pol==NULL)
        {
            
            ptr->nxt=pol;
        }
        else
        {
            node *s,*s1;
            s=ptr;
            while(s->nxt!=NULL)
            {
                s1=s;
                s=s->nxt;
            }
            s1->nxt=pol;
        }
        
    }
}

d(node *ptr)
{
    while (ptr->nxt!=NULL)
    {
        printf("c->%d e->%d",ptr->c,ptr->e);
        ptr=ptr->nxt;
    }
    
}

main()
{
    cp(poly1);
    d(poly1);
}