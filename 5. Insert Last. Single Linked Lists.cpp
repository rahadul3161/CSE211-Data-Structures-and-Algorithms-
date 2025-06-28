//Insert Last
#include iostream
using namespace std;
struct Node {
    int value;
    Node next; 
};
struct Node head = nullptr;
void insertTail() {
    struct Node newItem = new Node;
    newItem-value = 10;
    newItem-next = nullptr;

    if (head == nullptr) {
        head = newItem;
        return;}
    struct Node last = head;
    while (last-next != nullptr) {
        last = last-next;}
    last-next = newItem;
}

void printList() {
    struct Node temp = head;
    while (temp !=nullptr) {
        cout  temp-value   ;
        temp = temp-next; }
    cout  NULL  endl; }
int main() {
    insertTail(); 
    insertTail(); 
    printList();  
    return 0;
}
