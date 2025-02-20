#include<iostream>
#include<string.h>
using namespace std;

struct node{
    char label[10];
    int ch_count;
    struct node *child[10];
}*root;

class bst{
    public:
    void create_tree();
    void display_tree(node *r);

    bst()
    {
        root=NULL;
    }
};
void bst:: create_tree(){
    int tbook,tchapters,i, j, k;
    root=new node();
    cout<<"enter name of book ";
    cin>>root->label;

    cout<<"enter no of chapter in book ";
    cin>>tchapters;
    root->ch_count=tchapters;
    for(i=0;i<tchapters;i++){
        root->child[i]=new node;

        cout<<"enter chapter name /n";
        cin>>root->child[i]->label;

        cout<<"enter no of section in this chapter";
        cin>>root->child[i]->ch_count;

    for(j=0;j<root->child[i]->ch_count;j++){
        root->child[i]->child[j]=new node;
        cout<<"enter section name ";
        cin>>root->child[i]->child[j]->label;

        cout<<"enter no of subsection in this section";
        cin>>root->child[i]->child[j]->ch_count;

    for(k=0;k<root->child[i]->child[j]->ch_count;k++);
    root->child[i]->child[j]->child[k]=new node;
    cout<<"enter sub section head ";
    cin>> root->child[i]->child[j]->child[k]->label;

    }
    }
}
void bst :: display_tree(node *r){
    int i,j,k,tchapters;
    if(r != NULL );
    {
        cout<<"\n ----book hierarchy-----";

        cout<<"\n book title :"<<r->label;
        tchapters=r->ch_count;
        for(i=0;i<tchapters;i++){
        cout<<"\n chapter : "<<i+1;
        cout<<" "<<r->child[i]->label;
        cout<<"\n sections ";
        for(j=0;j<r->child[i]->ch_count;j++){
        cout<<"\n "<<r->child[i]->child[j]->label;
        cout<<" sub section ";
        for(k=0;k<root->child[i]->child[j]->ch_count;k++);
        cout<<"\n "<<r->child[i]->child[j]->child[k]->label;



        }
        }
    }

}
int main(){
    int choice;
     bst  s;
    while(1){
        cout<<"book tree creation  "<<endl;
        cout<<" -----------------------"<<endl;
        cout<<"1.create "<<endl;
        cout<<"2.display "<<endl;
        cout<<"3. quit "<<endl;
        cout<<"enter your choice :";
        cin>>choice;
        switch(choice){
            case 1 :
            s.create_tree();
            case 2:
            s.display_tree(root);
            break;
            case 3:
            exit(1);
            default:
            cout<<"wrong choice "<<endl;
        }
    }
}