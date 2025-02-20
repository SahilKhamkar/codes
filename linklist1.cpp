#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }

};
void insertathead(node* &head,int data){
    node* node2=new node(data);
    node2->next=head;
    head=node2;

}
void insertatend(node* &head,int data){
        node* node3=new node(data);
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node3;
        node3->next=NULL;

}

void insertatposition(node* &head,int data,int position){
        node* node4=new node(data);
        node* temp=head;
        for(int i=0;i<position-1;i++){
            temp =temp->next;
        }
        node4->next=temp->next;
        temp->next=node4;

        }


void display(node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* newnode=new node(10);
    node* head=newnode;

    display(head);

    insertathead(head,5);
    display(head);

    insertatend(head,20);
    display(head);

    insertatposition(head,15,2);
    display(head);


}