#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
};

Node* insertNode(Node* rootNode, int data) {
    // If root doesnt exist, create a node to be the root.
    if (rootNode == nullptr) {
        return createNode(data);
    }

    // If the value is less than the parent,
    // set the parents left pointer to the address
    // of a new inserted node with the users specified data.
    
    // But if the value is more than the parent,
    // place the new note in the parents right pointer.
    if (data < rootNode->data) {
        rootNode->left = insertNode(rootNode->left, data);
    } else if (data > rootNode->data) {
        rootNode->right = insertNode(rootNode->right, data);
    }

    // If nothing happened, just return the original root poiter.
    return rootNode;
};

void inOrder(Node* root) {
    if (root == nullptr) {
        std::cout << "Tree is empty." << std::endl;
        return;
    }

    if (root->left != nullptr) inOrder(root->left);

    std::cout << root->data << std::endl;

    if (root->right != nullptr) inOrder(root->right);
};

void preOrder(Node* root) {
    if (root == nullptr) {
        std::cout << "Tree is empty." << std::endl;
        return;
    }

    std::cout << root->data << std::endl;

    if (root->left != nullptr) inOrder(root->left);

    if (root->right != nullptr) inOrder(root->right);
};

void postOrder(Node* root) {
    if (root == nullptr) {
        std::cout << "Tree is empty." << std::endl;
        return;
    }

    if (root->left != nullptr) inOrder(root->left);

    if (root->right != nullptr) inOrder(root->right);

    std::cout << root->data << std::endl;
};

int main() {
    Node* root = nullptr;
    root = insertNode(root, 15);
    root = insertNode(root, 4);
    root = insertNode(root, 20);
    root = insertNode(root, 17);
    root = insertNode(root, 19);

    // part 1.1
    std::cout << "In order traversal." << std::endl;
    inOrder(root);

    std::cout << "Pre order traversal." << std::endl;
    preOrder(root);

    std::cout << "Post order traversal." << std::endl;
    postOrder(root);

    // part 1.2
    // just normally insert the nodes. 
    // as insertNode() takes care of the positioning automatically.
    root = insertNode(root, 8);
    root = insertNode(root, 7);
    root = insertNode(root, 9);
    root = insertNode(root, 3);

    // part 1.3
    // I would use inorder traversal, but when the given number appears
    // set its childrens root pointer to its own root pointer, and then delete it.

    // part 1.4
    // You would just compate the given data to the current nodes data and go
    // left or right accordingly. This is much faster because you theoretically
    // cut the choices in half every move rather then randomly picking the next node.

    // part 1.5
    // While non-linear data structs are almost always more complex and not
    // always the right tool for the job, They can be much faster at searching.
    // They are faster because you can basically group your options and navigate the 
    // data struct by making logical decisions.
    // In theory, non-linear should always be at most equal tome to search as a linear struct.

    return 0;
}