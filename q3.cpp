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
    node*head;
    node*tail;
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
            newnode->next=NULL;
        }
    }
    void middle(){
        node*slow=head;
        node*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->data<<" "<<endl;
    }
};
int main(){
    list ll;
    ll.pushfront(1);
    ll.pushfront(2);
    ll.pushback(3);
    ll.pushback(4);
    ll.middle();
}
