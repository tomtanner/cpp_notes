#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int d)
    {
       data=d;
       next=NULL;
    }
};
int len(node* head)
{
    if(head==NULL)
        return 0;
    node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
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
int intersection(node* &head1,node* head2)
{
    int l1=len(head1);
    int l2=len(head2);
    int d=0;
    node *ptr1;
    node *ptr2;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else//l2>l1
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d)
    {
        ptr1=ptr1->next;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
            return ptr1->data;
      ptr1=ptr1->next;
      ptr2=ptr2->next;
    }
    return -1;
}
void intersect(node* &head1,node* &head2,int pos)
{
    node* temp1=head1;
    pos--;
    while(pos--)
        temp1=temp1->next;
    node* temp2=head2;
    while(temp2->next!=NULL)
        temp2=temp2->next;
    temp2->next=temp1;
}
void display(node* head)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty"<<endl;
        return;
    }
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
node* merge(node* head1,node* head2)
{
   node* p1=head1;
   node* p2=head2;
   node* dummy=new node(-1);
   node* p3=dummy;
   while(p1!=NULL && p2!=NULL)
   {
       if(p1->data<p2->data)
       {
        p3->next=p1;
        p1=p1->next;
       }
       else
       {
           p3->next=p2;
           p2=p2->next;
       }
       p3=p3->next;
   }
   while(p1!=NULL)
   {
       p3->next=p1;
       p1=p1->next;
       p3=p3->next;
   }
   while(p2!=NULL)
   {
       p3->next=p2;
       p2=p2->next;
       p3=p3->next;
   }

   return dummy->next;
}
int main()
{
 node* h1=NULL;
 node* h2=NULL;
 int l1,l2;
 cout<<"Size of the first linked list:"<<endl;
 cin>>l1;
 cout<<"Size of the second linked list:"<<endl;
 cin>>l2;
 int a1[l1],a2[l2];
 cout<<"Enter the elements of the first linked list"<<endl;
 for(int i=0;i<l1;i++)
 {
     cin>>a1[i];
     insertattail(h1,a1[i]);
 }
 cout<<"Enter the elements of the second linked list"<<endl;
 for(int i=0;i<l2;i++)
 {
     cin>>a2[i];
     insertattail(h2,a2[i]);
 }
 display(h1);
 display(h2);
 node* newhead=merge(h1,h2);
 display(newhead);
}
