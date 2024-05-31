#include <iostream>
#include <string>
#include "Header2.h"
using namespace std;

class Node
{
public:

    int destination;
    string* route;
    int size;
    double TicketPrice;
    HashTable ht;
    Node* next;

    Node(HashTable h, string arr[], int s, double p, int des) {
        size = s;
        route = new string[size];
        for (int i = 0; i < size; i++)
        {
            route[i] = arr[i];
        }

        TicketPrice = p;
        ht = h;
        destination = des;
        next = NULL;
    }

    void printAsArray(string route[], int s);
    void printAsHashTable(HashTable ht);
};



void Node::printAsArray(string route[], int s)
{
    for (int i = 0; i < size; i++)
    {
        cout << route[i] << " | ";
    }
    cout << endl;
}


void Node::printAsHashTable(HashTable ht)
{
    ht.print();
}


class ProjectLinkedList {
public:
    Node* head;
    Node* tail;

    ProjectLinkedList()
    {
        head = NULL;
        tail = NULL;
    }


    void addNode(HashTable h, string arr[], int s, double p, int des)
    {
        Node* newNode = new Node(h, arr, s, p, des);
        newNode->next = head;
        head = newNode;
    }


    void searchAndPrint(int des, string route[], HashTable ht, int s, double p) {
        Node* current = head;
        bool found = false;
        while (current != nullptr) {
            if (current->destination == des) {
                current->printAsArray(route, s);

                cout << "\t\t\t\tThe price of the ticket : " << p << endl;
                cout << endl;
                current->printAsHashTable(ht);
                found = true;
                break;
            }
            current = current->next;
        }
        if (!found) {
            cout << "Not Found" << endl;
        }
    }

};

