#include <iostream>

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val) {
            data = val;
            left = nullptr;
            right = nullptr;
        }

        Node() {
            data = 0;
            left = nullptr;
            right = nullptr;
        }
};

class BST {
    Node* root;
    public:
        Node* createNode(int data){
            Node* newNode = new Node(data);
            return newNode;
        }

        Node* insertNode(Node* root, int data) {
            if(root = nullptr) {
                return createNode(data);
            }

            if (data < root->data){
                root->left = insertNode(root->left, data);
            } else if (data > root-> data) {
                root->right = insertNode(root->right, data);
            }

            return root;
        }

        void inOrderTraversal(Node* root){
            if(root == nullptr) return;
            
            if(root->left){
            inOrderTraversal(root->left);
            }
            
            std::cout << root->data << " ";
            
            if(root->right){
            inOrderTraversal(root->right);
            }
        }

        Node* search(Node* root, int key){
            if (root == nullptr || root->data == key) {
                return root;
            }

            if(key < root->data){
                return search(root->left, key);
            }
            return search(root->left, key);
        }

        Node* deleteNode(Node* root, int key){
            
        }
};

int main() {

}