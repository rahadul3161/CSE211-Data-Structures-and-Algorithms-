//Delete First
#include <iostream>
using namespace std;
struct Node {
    int value;
    struct Node* next; 
};
struct Node* head = nullptr;
void deleteHead() {
    if (head==nullptr) {
        return; }
    struct Node* cur=head; 
     
    head = head->next; 
    delete cur; 
}
void insertHead(int val) {
    struct Node* newNode = new Node;
    newNode->value = val;
    
    newNode->next = head;
    head = newNode;
}
void printList() {
    struct Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next; }
    cout << "NULL" << endl; }
int main() {
    insertHead(30);
    insertHead(20);
    insertHead(10);
    cout << "Before deleteHead:\n";
    printList();
    deleteHead(); 
    cout << "After deleteHead:\n";
    printList();
    return 0;
}
