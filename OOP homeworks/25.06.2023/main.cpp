
#include <iostream>
using namespace std;

template<typename T>
class BinaryTree {
public:
    struct Node {
        T data{};
        Node *left{};
        Node *right{};

        Node(T data) : data(data) {}
    };


    BinaryTree() = default;

    BinaryTree(T data) {
        this->root = new Node(data);
    }

    bool tryAdd(T data) {
        if (this->root == nullptr) {
            this->root = new Node(data);
            return true;
        }
        else {
            Node *current = this->root;
            while (true) {
                if (data < current->data) {
                    if (current->left == nullptr) {
                        current->left = new Node(data);
                        return true;
                    } else {
                        current = current->left;
                    }
                } else if (data > current->data) {
                    if (current->right == nullptr) {
                        current->right = new Node(data);
                        return true;
                    } else {
                        current = current->right;
                    }
                } else {
                    return false;
                }
            }
        }
    }



    void print(Node* root)
    {
        if (root == nullptr)
            return;

        print(root->left); //7, 5
        cout << root->data << endl;
        print(root->right);
    }

    void del(T data) {
        Node* current = this->root;
        Node* parent = nullptr;

        while (current) {
            if (data > current->data) {
                parent = current;
                current = current->right;
            }
            else if (data < current->data) {
                parent = current;
                current = current->left;
            }
            else {
                break;
            }
        }

        if (!current)
            return;

        if (!current->left && !current->right) {
            if (parent) {
                if (parent->left == current)
                    parent->left = nullptr;
                else
                    parent->right = nullptr;
            }
            else {
                this->root = nullptr;
            }
            delete current;
        }
        else if (current->left && current->right) {
            Node* successor = current->right;
            Node* successorParent = current;

            while (successor->left) {
                successorParent = successor;
                successor = successor->left;
            }

            current->data = successor->data;

            if (successorParent->left == successor)
                successorParent->left = nullptr;
            else
                successorParent->right = nullptr;
            delete successor;
        }
        else {
            Node* child = (current->left) ? current->left : current->right;

            if (parent) {
                if (parent->left == current)
                    parent->left = child;
                else
                    parent->right = child;
            }
            else {
                this->root = child;
            }

            delete current;
        }
    }

    void inOrderTraversal(Node* root) {
        Node* current = root;

        while (current != nullptr) {
            if (current->left == nullptr) {
                cout << current->data << " ";
                current = current->right;
            }
            else {
                Node* predecessor = current->left; //7, 5

                while (predecessor->right != nullptr && predecessor->right != current) {
                    predecessor = predecessor->right; //6
                }

                if (predecessor->right == nullptr) {
                    predecessor->right = current; //
                    current = current->left;
                }
                else {
                    predecessor->right = nullptr;
                    cout << current->data << " ";
                    current = current->right;
                }
            }
        }
    }


    Node* removeNode(Node* root, int key) {
        if (root == nullptr) {
            return nullptr;
        }

        if (key < root->key) {
            root->left = removeNode(root->left, key);
        } else if (key > root->key) {
            root->right = removeNode(root->right, key);
        } else {
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                root = nullptr;
            } else if (root->left == nullptr) {
                Node* temp = root;
                root = root->right;
                delete temp;
            } else if (root->right == nullptr) {
                Node* temp = root;
                root = root->left;
                delete temp;
            } else {
                Node* successor = root->right;
                while (successor->left != nullptr) {
                    successor = successor->left;
                }
                root->key = successor->key;
                root->right = removeNode(root->right, successor->key);
            }
        }

        return root;
    }



     Node* getRoot()
     {
        return this->root;
     }



private:
    Node *root{};
};


int main() {

    BinaryTree<int> *tree = new BinaryTree<int>(20);
     tree->tryAdd(10);
     tree->tryAdd(9);
     tree->tryAdd(15);
     tree->tryAdd(12);
     tree->tryAdd(11);
     tree->tryAdd(13);
     tree->tryAdd(17);



    tree->del(11);
    tree->print(tree->getRoot());


    return 0;
}

