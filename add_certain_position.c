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


