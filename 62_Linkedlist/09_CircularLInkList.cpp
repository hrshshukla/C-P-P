// Real use of do-while loop in print() of circular list.


#include <iostream>
using namespace std;

class Node{
 public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class CircularLinkList{
 public:
    Node *head, *tail;
    int totalSize = 0;

    CircularLinkList(){
        head = tail = NULL;
    }

    void pushFront(int value){
        Node* newNodePointer = new Node(value);
        if (head == NULL)
        {
            head = tail = newNodePointer;
            tail->next = head;
        }
        newNodePointer->next = head;
        head = newNodePointer;
        tail->next = head;
        totalSize++;

    }

    void pushBack(int value){
        Node* newNodePointer = new Node(value);
        if (head == NULL)
        {
            head = tail = newNodePointer;
            tail->next = head;
            return;
        }
        newNodePointer->next = head;
        tail->next = newNodePointer; 
        tail = newNodePointer; 
        totalSize++;
    }

    void popFront(){

        if (head == NULL) return; // for empty 
        if (head == tail) // for single Node : different case 
        {
            delete head;
            head = tail = NULL;
            return;
        } 
        Node* temp = head; // for 2 or more nodes in the list 
        head = head->next;
        tail->next = head; // this is important 

        delete temp;
        totalSize--;
    }

    void popBack(){

        if (head == NULL) return; // for empty 
        if (head == tail) // for single Node : different case 
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head; // for 2 or more nodes in the list 
        while (temp->next != tail) // to get last 2nd Node
        {
            temp = temp->next;
        }
        delete temp->next; // delete the node after last 2nd node = delete last node; 
        tail = temp; 
        tail->next = head;

        totalSize--;
    }
    
    void print(){
        if (head == NULL){
            cout << "NULL";
            return;
        }
        Node *temp = head;

        do{
            cout <<temp->data << " -> ";
            temp = temp->next;
        }while (temp !=head);
        cout << "NULL"  << endl;
    }
};

int main(){

    CircularLinkList list1;
    list1.pushBack(2);
    list1.pushBack(5);
    list1.pushBack(7);
    list1.print();

    return 0;
}