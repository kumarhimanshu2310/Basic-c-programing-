struct node *add_at_begning(struct node*head,int data){
struct node*ptr,*temp;
temp=malloc(sizeof(struct node));
temp->data=data;
temp->link=head;
head=temp;
return head;
}
