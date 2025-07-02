#include <stdio.h>
#include <stdlib.h>

/*struct containing a data part and link part*/

struct node
{
    int data;
    struct node *link;
};


void append(struct node **, int);
void display(struct node *q);
void addatbeg(struct node **, int);
void addafter(struct node *q, int loc, int num);
void delete(struct node **q, int num);

void main()
{
    struct node *p;
    p = NULL;

    append(&p, 11);
    append(&p, 12);
    append(&p, 13);

    addatbeg(&p, 10);

    display(p);

    addafter(p, 7, 0);
    delete(&p, 10);
    display(p);
    
}



void append(struct node **q, int num)
{
    struct node *temp, *r;
    if(*q == NULL)
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        *q = temp;
    }
    else{
        temp = *q;

        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        r = malloc(sizeof(struct node));
        r->data = num;
        r->link = NULL;
        temp->link = r;
    }
}

void addatbeg(struct node **q, int num)
{
    struct node *temp;

    temp = malloc(sizeof(struct node));

    temp->data = num;
    temp->link = *q;
    *q = temp;
}

void addafter(struct node *q, int loc, int num)
{
    struct node *temp, *r;
    int i;

    temp = q;
    for(i=0; i<loc; i++){
        temp = temp->link;

        if(NULL == temp){
            printf("There are less then %d elements in list", loc);
            return;
        }
    }

    r = malloc(sizeof(struct node));
    r->data = num;
    r->link = temp->link;
    temp->link = r;
}

void delete(struct node **q, int num)
{
    struct node *old, *temp;

    temp = *q;

    while(temp != NULL){
        if(temp->data == num){
            if(temp == *q){
                *q = temp->link;
            }
            else{
                old->link = temp->link;
            }

            free(temp);
            return;
        }
        else{
            old = temp;
            temp = temp->link;
        }
    }

}


void display(struct node *q)
{
    printf("\n");

    while(q != NULL)
    {
        printf("%d", q->data);
        q = q->link;
    }
}