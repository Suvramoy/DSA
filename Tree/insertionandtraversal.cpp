#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right; 
    node(int value){
        data= value;
        left=right=NULL;
    }
};
node* binarytree(){
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    node* temp=new node(x);
    cout<<"Enter the left child of "<<x<<" :";
    temp->left=binarytree();
     cout<<"Enter the right child of "<<x<<" :";
    temp->right=binarytree();
    return temp;

}
void preorder(node* temp){
    if(temp==NULL)
    return ;
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
    return;
}
void inorder(node* temp){
    if(temp==NULL)
    return ;
    preorder(temp->left);
    cout<<temp->data<<" ";
    preorder(temp->right);
    return;
}
void postorder(node* temp){
    if(temp==NULL)
    return ;
    preorder(temp->left);
    preorder(temp->right);
    cout<<temp->data<<" ";
    return;
}
int main(){
    node* root;
    cout<<"Enter the root node :";
    root=binarytree();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}