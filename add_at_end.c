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
