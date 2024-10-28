#include <iostream>

class Node {
    public:
        int data;
        Node* next;
        
        Node(int data) {
            this->data = data;
            next = nullptr;
        }
};

class LinkedList {
    Node* head;
    public:
        LinkedList() {
            head = nullptr;
        }
        
        void insertAtHead(int data) {
            Node* newNode = new Node(data);
            if (head == nullptr) {
                head = newNode;
            } else {
                newNode->next = this->head;
                this->head = newNode;
            }
        }

        void push(int data) {
            Node* newNode = new Node(data);
            if (head == NULL){
                head = newNode;
            } else {
                Node* temp = head;
                while(temp != NULL){
                    if(temp->next == NULL) {
                        temp->next = newNode;
                        return;
                    } else{
                        temp = temp->next;
                    }
                }
            }
        }

        void print() {
            Node* temp = head;
            if (head == NULL) {
                std::cout << "List is empty." << std::endl;
                return;
            }

            while(temp != NULL) {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
        }
};

int main () {
    LinkedList l1;
    l1.insertAtHead(2);
    l1.insertAtHead(4);
    l1.insertAtHead(6);
    l1.insertAtHead(8);
    l1.push(17);
    l1.print();
}