//Delete Any
#include <iostream>
using namespace std;
struct Node {
    int value;
    Node* next;
};
Node* head = nullptr;
void deleteAny(int x) {
    if (head == nullptr) {
        return; 
}
    Node* cur = head;
    
    Node* prev = nullptr;
    while (cur != nullptr && cur->value != x) {
        prev = cur;
        cur = cur->next; }
    if (cur == nullptr) {
        return; }
    if (prev != nullptr) {
        prev->next = cur->next;} 
    else {
        head = head->next; }
    delete cur; }
void insertTail(int val) {
    Node* newNode = new Node;
    newNode->value = val;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
        return; }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

void printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout<<temp->value<<" ";
        temp = temp->next; }
    cout << "NULL" << endl; }
int main() {
    insertTail(10);
    insertTail(20);
    insertTail(30);
    insertTail(40);
    cout << "Before deleteAny: ";
    printList();
    deleteAny(30); 
    cout << "After deleteAny(30): ";
    printList();
    deleteAny(10); 
    cout << "After deleteAny(10): ";
    printList();
    deleteAny(100); 
    return 0;
}
