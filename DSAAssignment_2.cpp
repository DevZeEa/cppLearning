#include <iostream>
using namespace std;

class BinarySearchTree {
private:
    int label;
    BinarySearchTree* left;
    BinarySearchTree* right;

public:

    BinarySearchTree() : label(0), left(NULL), right(NULL) {}

    BinarySearchTree(int label) : label(label), left(NULL), right(NULL) {}


    void setLabel(int label) {
        this->label = label;
    }

    void setLeft(BinarySearchTree* left) {
        this->left = left;
    }

    void setRight(BinarySearchTree* right) {
        this->right = right;
    }


    int getLabel() const {
        return label;
    }

    BinarySearchTree* getLeft() const {
        return left;
    }

    BinarySearchTree* getRight() const {
        return right;
    }

  
    bool isLeaf() const {
        return (left == NULL && right == NULL);
    }


    void insert(BinarySearchTree* root, int label) {
        if (label == 0 || label == root->label) {

            return;
        }

        if (label < root->label) {

            if (root->left == NULL) {
                root->left = new BinarySearchTree(label);
            } else {
                insert(root->left, label);
            }
        } else if (label > root->label) {

            if (root->right == NULL) {
                root->right = new BinarySearchTree(label);
            } else {
                insert(root->right, label);
            }
        }
    }


    void display() const {
        if (left != NULL) {
            left->display();
        }
        cout << label << " ";
        if (right != NULL) {
            right->display();
        }
    }
};

int main() {

    int numId = 2273;
    cout << "numId: " << numId << endl;

    BinarySearchTree* root = new BinarySearchTree();
    bool firstDigit = true;

    while (numId > 0) {
        int digit = numId % 10;
        numId /= 10;
        
        if (firstDigit) {
            root->setLabel(digit);
            firstDigit = false;
        } else {
            root->insert(root, digit);
        }
    }

    cout << "In-order Traversal of Tree: ";
    root->display();
    cout << endl;


    delete root;

    return 0;
}
