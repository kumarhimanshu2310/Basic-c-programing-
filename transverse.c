oid no_of_elements(struct node*head){
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
