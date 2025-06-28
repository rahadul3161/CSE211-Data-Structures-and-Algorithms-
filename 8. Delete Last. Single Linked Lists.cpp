//Delete Last
#include <iostream>
using namespace std;
struct Node {
    int value;
    struct Node* next;
};
struct Node* head = nullptr;
void deleteTail() {
    if (head == nullptr) return;  // Empty list
    if (head->next==nullptr) {
        delete head;
        head=nullptr;
        return;
    }
    struct Node* prev = nullptr;
    
    struct Node* cur = head;
    while (cur->next!= nullptr) {
        prev=cur;
        cur=cur->next;
    }
    prev->next=nullptr;
    delete cur;
}
void insertTail(int val) {
    struct Node* newNode=new Node;
    newNode->value=val;
    newNode->next=nullptr;

    if (head==nullptr) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next!=nullptr)
        temp=temp->next;

    temp->next=newNode;
}
void printList() {
    struct Node* temp = head;
    while (temp!=nullptr) {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    insertTail(10);
    insertTail(20);
    insertTail(30);
    cout << "Before deleteTail:\n";
    printList();
    deleteTail();  
    cout << "After deleteTail:\n";
    printList();
    return 0;
}
