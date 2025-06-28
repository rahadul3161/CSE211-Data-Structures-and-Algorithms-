//Code of Insert First
#include iostream
using namespace std;
struct Node {
    int value;
    Node next; };
Node head = nullptr;
void insertHead() {
    Node newItem = new Node;
    newItem-value = 10;
    newItem-next = nullptr;

    newItem-next = head;
    head = newItem; 
}

void printList() {
    Node temp = head;
    while (temp != nullptr) {
        cout  temp-value   ;
        temp = temp-next; }
    cout  NULL  endl; }
int main() {
    insertHead(); 
    insertHead(); 
    printList();  
    return 0;
}
