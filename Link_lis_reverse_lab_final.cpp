#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;

    }

};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
    head = nullptr;
    }

    void append(int data){

    Node* newNode = new Node(data);
    if(!head){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    }

    void reverseList(){
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while(current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;

    }
    void display(){
    Node* temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
    }


};

int main(){

LinkedList Taj;
Taj.append(2);
Taj.append(5);
Taj.append(9);
Taj.append(16);
Taj.append(19);
cout << "Link list"  << endl;
Taj.display();
cout << "Reverse Link list"  << endl;
Taj.reverseList();
Taj.display();


return 0;
}
