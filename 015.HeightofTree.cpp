/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    
    int height(struct Node* node){
        // code here 
        int hr=1,hl=1;
        if(node ->left != NULL){
            hr = height(node->left)+1;
        }
        if(node ->right != NULL){
            hl = height(node->right)+1;
        }
        return max(hr,hl);
    }
};
