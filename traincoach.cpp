#include <iostream>
using namespace std;
struct Node {
    int coach;
    Node* next;
};
Node* head = NULL;
void addBeginning(int x) {
    Node* n = new Node{x, head};
    head = n;
}
void addEnd(int x) {
    Node* n = new Node{x, NULL};
    if (head == NULL) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = n;
}
void removeCoach(int x) {
    Node *temp = head, *prev = NULL;
    while (temp != NULL && temp->coach != x) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Coach not found.\n";
        return;
    }
    if (prev == NULL) head = temp->next;
    else prev->next = temp->next;
    delete temp;
    cout << "Coach removed.\n";
}
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Coach" << temp->coach << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main() {
    addEnd(1);
    addEnd(2);
    addEnd(3);
    addEnd(4);
    cout << "Original train:\n";
    display();
    addBeginning(0);
    cout << "After adding at beginning:\n";
    display();
    addEnd(5);
    cout << "After adding at end:\n";
    display();
    removeCoach(2);
    cout << "After removing coach:\n";
    display();
    return 0;
}
