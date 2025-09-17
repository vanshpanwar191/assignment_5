#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    public: 
      node(int val){
          data=val;
          next=NULL;
      }
;}
class list{
    node * head;
    node *tail;
    public:
       list(){
           head=tail=NULL;
       }
       void push_front(int val){
           node * newnode=new node(val);
           if(head==tail==NULL){
               head=tail=newnode;
           }
           else{
               newnode->next=head;
               head=newnode;
           }
           
       }
       void push_back(int val){
           node *newnode= new node(val);
           if(head==tail==NULL){
               head=tail=newnode;
           }
           else{
               tail->next=newnode;
               newnode->next=NULL;
               tail=newnode;
           }
           
       }
       void pop_front(){
           if(head==tail==NULL){
               cout<<"list is empty";
           }
           else if(head==tail){
               delete head;
           }
           else{
               node *temp=head;
               head=head->next;
               temp->next=NULL;
               delete temp;
               
           }
       }
       void pop_back(){
           if(head==tail==NULL){
               cout<<"list is empty";
           }
           else if(head==tail){
               delete head;
           }
           else{
               node *temp=head;
               while(temp->next!=tail){
                   temp=temp->next;
               }
               temp->next=NULL;
               delete tail;
               tail=temp;
           }
       }
       void print_ll(){
           if(head==tail==NULL){
               cout<<"list is empty";
           }
           else{
               node*temp=head;
               while(temp!=tail){
                   cout<<temp->data<<"->";
                   
               }
           }
       }
       void delete_node(int val){
           if(head->data==val){
               node*temp=head;
               head=head->next;
               delete temp;
               
           }
           else{
               node*prev=head;
               node *curr=head->next;
               while(curr!=NULL && curr->data!=val){
                   prev=curr;
                   curr=curr->next;
               }
               if(curr->NULL){
                   cout<<"val not found"<<endl;
               }
         
               prev->next=curr->next;
            if(curr==tail){
                   tail=prev;
               }
               delete curr;
               
               
           }
       }
       void pfh(int val){
           int j=1;
           if(head->data==val){
               cout<<j;
               
           }
           else{
               node*temp=head;
                if(temp==NULL){
                   cout<<"value not found";
               }
               while(temp->data!=val){
                   temp=temp->next;
                   j++;
               }
              
               cout<<"the position from head is "<<j;
           }
       }
       
};
int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.pop_back();
    ll.pop_front();
    ll.delete_node(2);
    ll.pfh(3);
    ll.print_ll();
}
