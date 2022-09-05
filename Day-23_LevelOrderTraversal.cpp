#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>
using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  	Node* insert(Node* root, int data){
        if(root==NULL){
            return new Node(data);
        }
        else{
            Node* cur;
            if(data<=root->data){
                cur=insert(root->left,data);
                root->left=cur;
            }
            else{
                cur=insert(root->right,data);
                root->right=cur;
            }           
            return root;
        }
    }
    int height(Node * root){
        if(root==NULL)
            return 0;
        else{
            int lh=height(root->left);
            int rh=height(root->right);
            if(lh>=rh) return (lh+1);
            else return (rh+1);
        }
    }
    void CurrentNode(Node * root,int l){
        if(root==NULL) return;
        if(l==1) cout<<root->data<<" ";
        else if(l>1){
            CurrentNode(root->left,l-1);
            CurrentNode(root->right,l-1);
        }
    }
	void levelOrder(Node * root){
        int h=height(root);
        int i=0;
        for(i=1;i<=h;i++)
            CurrentNode(root,i);
	}
};
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
