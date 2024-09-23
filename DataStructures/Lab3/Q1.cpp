#include <iostream>
using namespace std;

class IntNode {
  public:
        IntNode();
        IntNode(int i, IntNode *in);
        int info;
        IntNode *next;
};

// IntNode implementation
IntNode::IntNode()
{
    next = nullptr;
}

IntNode::IntNode(int i, IntNode *nextNode = nullptr)
{
    info = i;
    next = nextNode;
}

// Linked List definition
class LinkedList {
 public:
   LinkedList();
   void insert(int item);
   IntNode* find(int item);
   void deleteSecond();
   void print();
    void compare(LinkedList& list2);

    
 private:
    IntNode *head;
};

void LinkedList::compare(LinkedList& list2) {
        IntNode* current1 = head;
        IntNode* current2 = list2.head;
        cout << "head 1: " << head << "head2: " << list2.head << endl;
        while (current1 != nullptr && current2 != nullptr) {
            if (current1->info != current2->info) {
                cout << "The lists are NOT equal." << endl;
                return;
            }
            cout << current1->info << current2->info << endl;
            current1 = current1->next;
            current2 = current2->next;
        };
        cout << "The lists ARE equal." << endl;
    };

LinkedList::LinkedList() : head(nullptr){
}

void LinkedList::insert(int item)
{
 IntNode *node = new IntNode(item);
 node->next = head;
 head = node;
}

IntNode* LinkedList::find(int item)
{
   IntNode *temp = head;
   while (temp != nullptr)
   {
    	if (temp->info == item)
		     return temp;
    	temp = temp->next;
   }
   return nullptr;
}

void LinkedList::deleteSecond()
{
  if ((head != nullptr) && (head->next != nullptr))
  {
	IntNode* temp = head->next;
	head->next = temp->next;
	delete temp;
  }
}

void LinkedList::print() {
   IntNode *temp = head;
   cout << endl;
   while (temp != nullptr) {
   	cout << temp->info << endl;
   	temp = temp->next;
   }
   cout << endl;
}


int main() {
  LinkedList list;
  list.insert(1);
  list.insert(20);
  list.insert(35);
  list.insert(50);

  LinkedList list2;
  list2.insert(1);
  list2.insert(20);
  list2.insert(35);
  list2.insert(50);

  list.compare(list2);
    return 0;
}