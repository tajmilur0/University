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

class Link{
private:
    Node* head;
public:
    Link(){
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

    void LinkReverse(){
    Node* prev = nullptr;
    Node* current =  head;
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
    Link Taj;
    Taj.append(1);
    Taj.append(2);
    Taj.append(3);
    Taj.append(4);
    cout << "Link List" << endl;
    Taj.display();
    cout << "Reverse Link List" << endl;
    Taj.LinkReverse();
    Taj.display();

return 0;
}
