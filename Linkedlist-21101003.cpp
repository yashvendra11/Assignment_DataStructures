#include <iostream>
#include <string>
using namespace std;

struct Node 
{
	Node* prev;
	Node* next;
	string name;
	int age;
};

int main()
{
    struct Node* head;

    struct Node* node1 = new Node();
    node1->name = "Me";
    node1->age = 19;
    head = node1;
	node1->prev = NULL;

    struct Node* node2 = new Node();
    node1->next = node2;
	node2->prev = node1;
    node2->name = "Father";
    node2->age = 45;

    struct Node* node3 = new Node();
    node2->next = node3;
    node3->prev = node2;
    node3->name = "Mother";
    node3->age = 43;
	
    struct Node* node4 = new Node();
    node3->next = node4;
    node4->prev = node3;
    node4->name = "Grandfather";
    node4->age = 71;
	
    struct Node* node5 = new Node();
    node4->next = node5;
    node5->prev = node4;
    node5->name = "Grandmother";
    node5->age = 67;

    node5->next = NULL;

	struct Node* temp = head;
    cout << "Forward Traversal \n";
	while(true) {
        cout << temp->name << ": " << temp->age << "\n";    
        if(temp->next == NULL) break;
        temp = temp->next;
    }
    
    cout << "\nBackward Traversal \n";
    while(true) {
        cout << temp->name << ": " << temp->age << "\n";
        if(temp->prev == NULL) break;
        temp = temp->prev;
    }

    return 0;
}