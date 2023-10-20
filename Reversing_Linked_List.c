#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head,*temp;

void create(int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=data;
    if(head==NULL){
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

struct node *reverse(struct node *head){
    struct node *current,*prev,*next;
    current=head;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}

void print(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main(){
  int n;
  scanf("%d",&n);
  int m;
  for(int i=0;i<n;i++){
      scanf("%d",&m);
      create(m);
  }
  head=reverse(head);
  print(head);
}
