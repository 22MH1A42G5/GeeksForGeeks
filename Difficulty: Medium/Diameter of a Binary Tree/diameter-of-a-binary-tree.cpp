/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int maxi = 0;
    int Diameter(Node* root){
        if(root == NULL)
        return 0;
        int left = Diameter(root->left);
        int right = Diameter(root->right);
        maxi = max(left + right , maxi);
        return 1+max(left , right);
    }
    int diameter(Node* root) {
        // Your code here
        Diameter(root);
        return maxi;
    }
};