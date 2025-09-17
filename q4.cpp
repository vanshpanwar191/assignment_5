#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    
       node(int val){
           data=val;
           next=NULL;
       }
};
class list{
    public:
    node *head;
    node *tail;
    
       list(){
           head=NULL;
           tail=NULL;
       }
       void pushfront(int val){
           node *newnode=new node(val);
           if(head==tail==NULL){
               head=tail=newnode;
           }
           else{
               newnode->next=head;
               head=newnode;
               
           }
       }
       void pushback(int val){
           node *newnode=new node(val);
           if(head==tail==NULL){
               head=tail=newnode;
           }
           else{
               tail->next=newnode;
               tail=newnode;
               tail->next=NULL;
           }
           
       }
       void reverse(){
           node*prev=NULL;
           node*curr=head;
           node*next=head->next;
           while(curr!=NULL){
               next=curr->next;
               curr->next=prev;
               prev=curr;
               curr=next;
           }
       }
       void print_ll(){
          node*temp=head;
          while(temp!=NULL){
              cout<<temp->data<<"->"<<endl;
          }
       }
};
int main(){
    list ll;
    ll.pushfront(1);
    ll.pushfront(2);
    ll.pushfront(3);
    ll.pushback(4);
    ll.pushback(5);
    ll.reverse();
    ll.print_ll();
}
