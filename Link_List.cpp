#include<iostream>

using namespace std;

class Node{
public:
int data;
Node* next;

Node(int value){
    data = value;
    next = nullptr;
}


};

class LinkList{
private:
    Node* head;
public:
    LinkList(){
    head = nullptr;
    }

    void insertAtHead(int value){

    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    }

    void insertAtEnd(int value){
    Node* newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;

    }

    void deleteNode(int value){
    if(head == nullptr){
        cout << "List is empty...Nothing to delete" << endl;
        return;
    }

    if(head->data == value){
        Node* temp =head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr && temp->next->data != value){
        temp = temp->next;
    }

    if(temp->next == nullptr){
        cout << "Value not found in the list." << endl;
        return;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;

    }

    void display(){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr" <<endl;
    }

    ~LinkList(){
    Node* temp;
    while(head != nullptr){
        temp = head;
        head = head->next;
        delete temp;
    }
    }

};

int main(){
LinkList list;

list.insertAtHead(10);
list.insertAtHead(12);
list.insertAtHead(77);

cout << "Link list: ";
list.display();
list.deleteNode(12);
cout <<"After delete Node: ";
list.display();



return 0;
}


