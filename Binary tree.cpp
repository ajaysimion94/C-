#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int val){
        data=val;
        right=left=NULL;
    }
};
int main(){
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->left->left=new Node(4);
    cout<<root->right->data;
}
