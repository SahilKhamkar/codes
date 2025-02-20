#include<iostream>
#include <stack>

using namespace std;

class node
{
	public:
    	node *left;
    	char data;
    	node *right;
   	 
};

class CBT
{
	int length;
	node *temp, *t1, *t2;
	public:
    	node *root;
    	bool isoperator(char);
    	node *constructTree(string);
    	node *newNode(char);
    	void recursive_inorder(node*);
    	void recursive_postorder(node*);
    	void non_recursive_inorder(node*);
    	void non_recursive_postorder(node*);
};


int main()
{
	CBT b;
	string prefix;
	cout<<"Enter the Prefix expression :";
	cin>>prefix;
	b.root=b.constructTree(prefix);

    
    return 0;
    
}

void CBT::recursive_inorder(node* root)
{
	if (root != NULL)
	{
    	recursive_inorder(root->left);
    	cout << "\t" << root->data;
    	recursive_inorder(root->right);
	}
}

void CBT::recursive_postorder(node* root)
{
	if (root != NULL)
	{
  	 
        	recursive_postorder(root->right);
        	recursive_postorder(root->left);
        	cout << "\t" << root->data;
	}
}

void CBT::non_recursive_inorder(node *root)
{
	stack<node*>st;
	node *temp;
	temp=root;
	while(1)
	{
    	if(temp!=NULL)
    	{
        	st.push(temp);
        	temp=temp->left;
    	}
    	else
    	{
        	if(st.top =-1)
        	{
            	temp=st.pop();
            	cout<<"value is:\t"<<temp->data;
            	temp=temp->right;
        	}
        	else
            	break;
    	}
	}
}

void CBT::non_recursive_postorder(node *root)
{
	stack<node*>st;
	node *temp;
	temp=root;
	while(1)
	{
    	if(temp!=NULL)
    	{
        	st.push(temp);
        	if(temp->right!=NULL)
            	st.push(temp->right);
            	temp=temp->left;
    	}
    	else
    	{
        	while(1)
        	{
            	if(st.top!=-1)
            	{
                	temp=st.pop();
                	cout<<"value is:\t"<<temp->data;
            	}
            	else
                	break;
        	}
    	return 0;
    	}
	}
}
    
    
node *CBT::constructTree(string prefix)
{
	int i;
	stack<node*>st;
	length=prefix.length();
	for(i=length-1;i>=0;i++)
	{
    	if(!isoperator(prefix[i]))
    	{
        	temp=newNode(prefix[i]);
        	st.push(temp);
    	}
    	else
    	{
        	temp=newNode(prefix[i]);
       	 
        	t1=st.top();
        	st.pop();
       	 
        	t2=st.top();
        	st.pop();
       	 
        	temp->left=t1;
        	temp->right=t2;
       	 
        	st.push(temp);
    	}
	}
    
	temp=st.top();
	st.pop();
	return temp;
}


bool CBT::isoperator(char ch)
{
	if(ch=='+'|| ch=='-'|| ch=='*'|| ch=='/'|| ch=='^')
    	return true;
	return false;
}

node *CBT::newNode(char value)
{
	temp=new node;
	temp->data=value;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}






    
   	 
   	 
   	 
   	 
   	 
   	 
 
