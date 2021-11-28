#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Search in BST
Node* searchInBST(Node* root, int key) {

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }

    //data > key
    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }

    //data < key
    return searchInBST(root->right, key);
    
}

// To find inOrderSucc from line-66

Node* inOrderSucc(Node* root) {
    Node* curr = root;
    while(curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

void inorder(Node *root) {
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Delete in BST
Node* deleteInBST(Node* root, int key) {

    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    } 
    
    else if (key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    else {
        if (root->left == NULL)                   // For Case-1 and Case-2
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        // For Case-3

        Node* temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if (searchInBST(root, 6) == NULL) 
    {
        cout << "key not found in BST" <<endl;
    } else {
        cout << "Key Exists"<<endl;
    }

    inorder(root);
    cout<<endl;
    root = deleteInBST(root, 2);
    inorder(root);
    cout<<endl;
    return 0;
}
