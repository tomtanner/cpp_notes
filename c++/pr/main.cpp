#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void display(node* head)
{
    if(head==NULL){
        cout<<"The list is empty"<<endl;
        return;
    }
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
void insertattail(node* &head,int item)
{
    node* n=new node(item);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
     temp=temp->next;
     temp->next=n;
}
int length(node* head)
{
    int count=0;
    while(head!=NULL)
    {
        head=head->next;
        count++;
    }
   return count;
}
int intersection(node* head1,node* head2)
{
  int l1=length(head1);
  int l2=length(head2);
  if(l1>l2){
    l1=l1-l2;
    while(l1--)
    {
        head1=head1->next;
    }
  }
   else{
   l1=l2-l1;
   while(l1--)
   {
       head2=head2->next;
   }
   }
   l2=0;
   while(head1!=NULL )
   {
     if(head1==head2){
         return head1->data;
     }
     head1=head1->next;
     head2=head2->next;
     l2++;
   }
   return -1;
}
void intersector(node* head1,node* head2,int pos)
{
    pos--;
while(pos--)
    head1=head1->next;
    while(head2->next!=NULL)
    head2=head2->next;
    head2->next=head1;
}
int main()
{
    node *head1=NULL,*head2=NULL;
    insertattail(head1,10);
    insertattail(head1,20);
    insertattail(head1,30);
    insertattail(head1,40);
    insertattail(head2,1);
    insertattail(head2,2);
    insertattail(head2,3);
    intersector(head1,head2,2);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    return 0;
}