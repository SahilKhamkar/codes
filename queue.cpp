#include<iostream>
using namespace std;

class node{
    public:
    int key;
    node *ln, *rn;
    node(int val){
        key=val;
        ln=rn=NULL;
    }
}; 

class tree{
    public:
    node *root;
    tree() { root = NULL; }
    node* createtree(int key){
        root = new node(key);
        return root;
    }
void insertnode(int key, node* root){
    node* Node=new node(key);
    if(key <= root->key){
        if(root->ln ==NULL){
            root->ln = Node;
        }
        else{
            insertnode(key,root->ln);
        }
    }else{
        if(root->rn==NULL){
            root->rn=Node;
        }
        else{
            insertnode(key, root->rn);
        }
    }
}
void displayinorder(node* root){
    if(root!=NULL){
        displayinorder(root->ln);
        cout<<root->key<<" ";
        displayinorder(root->rn);

    }
}

void swapnodes(node* root){
    if(root !=NULL){
        node* temp=root->ln;
        root->ln=root->rn;
        root->rn=temp;
        swapnodes(root->ln);
        swapnodes(root->rn);
    }
}
void displaysmallest(node* root){
    while(root->ln!=NULL){
        root=root->ln;
    }
    cout<<"the smallest number is :"<<root->key<<endl;
}
int maxdepth(node* root){
    if(root==NULL)
        return 0;
    int leftdepth = maxdepth(root->ln);
    int rightdepth = maxdepth(root->rn);
    return max(leftdepth,rightdepth)+1;
}
 node* searchtree(node* root,int key){
    if(root==NULL || root->key==key)
    return root;
    if (key<root->key)
        return searchtree(root->ln,key);
        return searchtree(root->rn,key);
 }
};
int main(){
    int key, choice,flag=0;
    tree a;
    node *root=NULL;

    do{
        cout<<"enter operation you want to perform:"<endl;
        cout<<"1.insert a node "<<endl;
        cout<<"2. display the tree in order"<<endl;
        cout<<"3.display the smallest no"<<endl;
        cout<<"4.search for a node"<<endl;
        cout<<"5. swap the nodes"<<endl;
        cout<<"6.maxdepth"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"enter the key value:";
            cin>>key;
            if(flag==0){
                root=a.createtree(key);
                flag++;
            }
            else{
                a.insertnode(key,root);
            }
            break;
        case 2:
         a.displayinorder(root);
         cout<<endl;
         break;

        case 3:
            a.displaysmallest(root);
            break;
        case 4:
        cout<<"enter key to search:";
        cin>>key;
        if(a.searchtree(root,key)!=NULL)
            cout<<"key fount in tree"<<endl;
        else
            cout<<"key not found"<<endl;
            break;

        case 5:
            cout<<"swapping the nodes"<<endl;
            a.swapnodes(root);
            break;

        case 6:
         cout<<"max depth of tree is "<<endl;
         cout<<a.maxdepth(root)<<endl;
         break;

        case 7:
            cout<<"Exiting..............................."<<endl;
            break;

        default:
        cout<<"invalid choice.Enter valid choice"<<endl;
        }
    }while(choice!=7);

    return 0;
}

