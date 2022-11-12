#include <iostream>
#include <forward_list>
using namespace std;


class Node {
public:
    int data_;
    Node* next_;
};


class LinkedList {
public:
    LinkedList(): first(nullptr) {};
    LinkedList(int A[], int n) {
        Node* last, *t;
        first = new Node;
        first->data_ = A[0];
        last = first;
        
        
        for(int i = 1; i < n; i++) {
            t = new Node;
            t->data_ = A[i];    
            last->next_ = t;
            t->next_ = nullptr;
            last = t;
        }
    }

    Node* head() {
        return first;
    }
private:
    Node* first;

};

void print(Node* first) {
    Node* ptr = first;
    while(ptr != nullptr) {
        cout << ptr->data_ << " ";
        ptr = ptr->next_;
    }
    cout << '\n';
}

Node* removeMiddleElement(Node* head) {
    size_t listSize = 0;
    Node* ptr = head;
    Node* last = nullptr;
    while (ptr != nullptr)
    {
        listSize++;
        ptr = ptr->next_;
        if(ptr != nullptr) {
            last = ptr;
        }
    }

    size_t half = listSize / 2;
    ptr = head;
    for(int i = 0; i < half; i++) {
        last = ptr;
        ptr = ptr->next_;
    }
    last->next_ = ptr->next_;
    delete ptr;

    return head;
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6};
    size_t size = sizeof(A)/ sizeof(A[0]);
    LinkedList ll(A, size);
    
    removeMiddleElement(ll.head());
    print(ll.head());
    return 0;
}

