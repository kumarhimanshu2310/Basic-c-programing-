#include <stdio.h>
#include <stdlib.h>

struct node{
		int data;
		struct node*link;
	};
void no_of_elements();
void add_at_end();
struct node* add_at_begning();
void add_certain_position();
int main(){
struct node*head=malloc(sizeof(struct node));

head->data=45;
head->link=NULL;
struct node*current= malloc(sizeof(struct node));
current->data=10;
current->link=NULL;
head->link=current;
current= malloc(sizeof(struct node));
current->data=23;
current->link=NULL;
head->link->link=current;
printf("Hello HImanshu\n");

add_at_end(head, 45 );

head=add_at_begning(head, 72);
add_at_end(head, 68);
add_at_end(head, 92);
add_at_end(head, 89);
add_certain_position(head,96,4 );
add_certain_position(head,93,7 );
no_of_elements(head);

return 0;
}
void no_of_elements(struct node*head){
    int count=0;
    if(head==NULL)
        printf("Linked list is empty");
    struct node*ptr=NULL;
    ptr=head;

    while(ptr!=NULL){
        count++;
        printf("%d",ptr->data);
        printf("\n");
        ptr=(ptr->link);


    }
    printf("Total no of node in tha linked list are : %d",count);

}
void add_at_end(struct node*head,int data){
    struct node*ptr,*temp;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;


}

struct node *add_at_begning(struct node*head,int data){
struct node*ptr,*temp;
temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=head;
head=temp;
return head;
}
void add_certain_position(struct node*head,int data,int pos){
struct node *ptr,*ptr2;
ptr=head;
ptr2=malloc(sizeof(struct node));
ptr2->data=data;
ptr2->link=NULL;
pos--;
while(pos!=1){
    ptr=ptr->link;
    pos--;
}
ptr2->link=ptr->link;
ptr->link=ptr2;
}


