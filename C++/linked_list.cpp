#include<iostream>
using namespace std;
struct node{
    int info;
    struct node* next;
};
struct node* start=NULL;
struct node* head=NULL;
struct node* tail=NULL;

void insert(int newdata)
{
    struct node* newnode=(struct node*) malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->info=newdata;
    struct node* temp;
    
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    }
    
    
    
}
void newnode(int data, int n)
{
    struct node* temp;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->info=data;
    if(start==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        temp=start;
        for(int i=0;i<n-2;i++)
        {
            temp=temp->next;
        }
        struct node* r;
        r=temp->next;
        temp->next=newnode;
        newnode->next=r;
        free(r);
    }
}
void deletenode(int n)
{
    struct node* temp;
    if(start==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        temp=start;
        for(int i=0;i<n-2;i++)
        {
            temp=temp->next;
        }
        struct node* r;
        r=start;
        for(int i=0;i<n-1;i++)
        {
            r=r->next;

        }
        temp->next=r->next;

    }
    
}
void display(){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->next;
    }
    
}
void sort(struct node **h)
{
    int i,j,a;

    struct node *temp1;
    struct node *temp2;

    for(temp1=*h;temp1!=NULL;temp1=temp1->next)
      {
        for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
          { 
            if(temp2->info < temp1->info)
              {
                a = temp1->info;
                temp1->info = temp2->info;
                temp2->info = a;
              }
           }
       }
}

int search(int key)
{
    int index;
    struct node *curNode;

    index = 0;
    curNode = head;

    // Iterate till last element until key is not found
    while (curNode != NULL && curNode->info != key)
    {
        index++;
        curNode = curNode->next;
    }


    return (curNode != NULL) ? index : -1;
}
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the data";
        int a;
        cin>>a;
        insert(a);
    }
    
    cout<<"The linked list is"<<" "<<endl;
    display();
    cout<<endl;
    sort(&start);
    cout<<"After sorting"<<endl;
    display();
    int x;
    cout<<"enter the element u want to search"<<endl;
    search(x);
    cin>>x;
    int a;
    a=search(x);
    cout<<a;

    return 0;
}
