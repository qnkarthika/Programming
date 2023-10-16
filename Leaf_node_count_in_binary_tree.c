#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int flag=0;
struct node{
    int data;
    struct node *left,*right;
}*root,*temp,*a[50];

void createroot(int value){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=value;
    rear++;
    a[rear]=newnode;
    if(front==-1){
        front++;
        root=newnode;
    }
}

void createchild(int value)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    rear++;
    a[rear]=newnode;
    if(flag==0){
        temp=a[front];
        temp->left=newnode;
        flag=1;
    }
    else{
        temp=a[front];
        temp->right=newnode;
        front++;
        flag=0;
    }
    printf("%d is added\n",value);
}

void countleaf(struct node *head,int *count){
    if(head==NULL){
        return;
    }
    if(head->left==NULL && head->right==NULL){
        (*count)++;
    }
    countleaf(head->left,count);
   
    countleaf(head->right,count);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    createroot(arr[0]);
    for(int i=1;i<n;i++){
        createchild(arr[i]);
    }
    int count=0;
    countleaf(root,&count);
    printf("Count:%d",count);
}
