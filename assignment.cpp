#include <iostream>
using namespace std;

class Product {
private:
    int data;
    Product* next;
    int productId;

public:
    
    int get() {
        return data;
    }

    void set(int data) {
        this->data = data;
    }

    Product* getNext() {
        return next;
    }

    void setNext(Product* nextNode) {
        this->next = nextNode;
    }

    int getProductId() {
        return productId;
    }

    void setProductId(int pid) {
        this->productId = pid;
    }
};

class Stack {
private:
    Product* head;  

public:
    Stack() : head(nullptr) {}

    
    void push(int x) {
        Product* newProduct = new Product();
        newProduct->set(x);
        newProduct->setNext(head);
        head = newProduct;
    }

    
    int top() {
        if (head != nullptr) {
            return head->get();
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }


    int pop() {
        if (head == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int topData = head->get();
        Product* temp = head;
        head = head->getNext();
        delete temp;
        return topData;
    }
};

int main() {
    
    Product product;
    Stack stack;

    
    int studentLastTwoDigits =  73; 
    int productId = 2400 + studentLastTwoDigits;
    product.setProductId(productId);

    int pid = product.getProductId();
    cout << "Product ID: " << pid << endl;

    while (pid > 0) {
        int digit = pid % 10;
        stack.push(digit);
        pid /= 10;
    }

    cout << "Top element after pushing digits: " << stack.top() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    cout << "Top element after popping two elements: " << stack.top() << endl;

    return 0;
}
