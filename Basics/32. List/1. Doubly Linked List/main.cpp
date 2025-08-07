// https://vjudge.net/problem/Aizu-ALDS1_3_C

#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* left;
    ListNode* right;

    // Constructor
    ListNode(int data) {
        val = data;
        left = right = nullptr;
    }
};

class DoublyLinkedList {
    ListNode* head;
    ListNode* tail;

public:
    // Constructor to initialize an empty list
    DoublyLinkedList() {
        head = tail = nullptr;
    }

    // Insert at the front of the list
    void insert(int data) {
        ListNode* newNode = new ListNode(data);

        if (head == nullptr) {  // If list is empty
            head = tail = newNode;
        } else {
            newNode->right = head;
            head->left = newNode;
            head = newNode;
        }
    }

    // Delete the first node with the given value
    void deleteNode(int data) {
        ListNode* temp = head;

        while (temp != nullptr) {
            if (temp->val == data) {
                if (temp->left != nullptr) {
                    temp->left->right = temp->right;
                } else {
                    // Removing the head node
                    head = temp->right;
                }

                if (temp->right != nullptr) {
                    temp->right->left = temp->left;
                } else {
                    // Removing the tail node
                    tail = temp->left;
                }

                delete temp;  // Free the memory of the node
                return;
            }
            temp = temp->right;
        }
    }

    // Delete the first node in the list
    void deleteFirst() {
        if (head != nullptr) {
            ListNode* temp = head;
            head = head->right;

            if (head != nullptr) {
                head->left = nullptr;
            } else {
                tail = nullptr;  // List becomes empty
            }

            delete temp;
        }
    }

    // Delete the last node in the list
    void deleteLast() {
        if (tail != nullptr) {
            ListNode* temp = tail;
            tail = tail->left;

            if (tail != nullptr) {
                tail->right = nullptr;
            } else {
                head = nullptr;  // List becomes empty
            }

            delete temp;
        }
    }

	void printList() {
    if (head == nullptr) {
        return;
    } else {
        ListNode* temp = head;  // Temporary pointer to traverse the list
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->right;
        }
        cout << endl;  // To print the list in one line
    }
}

};

int main() {
    int n;
    cin >> n;
    DoublyLinkedList dll;

    for (int i = 0; i < n; ++i) {
        string command;
        int x;
        cin >> command;

        if (command == "insert") {
            cin >> x;
            dll.insert(x);
        } else if (command == "delete") {
            cin >> x;
            dll.deleteNode(x);
        } else if (command == "deleteFirst") {
            dll.deleteFirst();
        } else if (command == "deleteLast") {
            dll.deleteLast();
        }
    }

    dll.printList();
    return 0;
}
