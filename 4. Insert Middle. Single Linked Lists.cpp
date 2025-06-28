//Code: Insert Middle
#include <iostream>
using namespace std;
struct Node {
    int value;
    Node* next;
};
Node* head=nullptr;
void insertMiddle(int after, int val) {
    Node* newItem=new Node;
    newItem->value=val;
    newItem->next=nullptr;
    
    Node* prev=head;
    while (prev!=nullptr && prev->value!= after) {
        prev=prev->next;
    }
    if (prev==nullptr) {
        cout<<"Value "<<after<<" not found in the list."<<endl;
        delete newItem;
        return;
    }
    newItem->next=prev->next;
    prev->next=newItem;
}
void insertTail(int val) {
    struct Node* newNode=new Node;
    newNode->value=val;
    newNode->next=nullptr;
    if (head==nullptr) {
        head=newNode;
        return;
    }
    struct Node* temp=head;
    while (temp->next!=nullptr)
        temp=temp->next;
    temp->next=newNode;
}
void printList() {
    struct Node*temp=head;
    while (temp!=nullptr) {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    insertTail(5);
    insertTail(15);
    insertTail(20);
    cout<<"Before insertMiddle: ";
    printList();
    insertMiddle(15, 10);  
    cout<<"After insertMiddle: ";
    printList();
    return 0;
}
