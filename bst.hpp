#include "node.hpp"
#include <memory>
#include <iostream>
#include <string>

class BST
{
public:
    // Constructor
    BST(std::pair<std::size_t, std::string> value) : root_(new Node(value)) {}

    Node *GetLeft() const { return root_->left_; }
    Node *GetRight() const { return root_->right_; }

    void insert(std::pair<std::size_t, std::string> value)
    {
        //STEP 1: initialize variables
        Node *  current = root_;
        Node *  parent  = nullptr;
        Node ** child   = &root_; 

        // STEP 2: SEARCH
        insert_search(current, parent, child, value.first);

        // STEP 3: INSERT
        Node * newNode   = new Node( value );                                              
        newNode->parent_ = parent;                                                        
        *child           = newNode;      
    }

    void display()
    {
        display(root_);
    }

private:
    Node *root_;

    void insert_search(Node* &current, Node* &parent, Node** &child, std::size_t key)
    {
        if(current == nullptr) {
            return;
        }
        parent = current;
        if(current->value_.first < key) {
            current = current->right_;
            child = &current->right_;
        } else {
            current = current->left_;
            child = &current->left_;
        }
        insert_search(current, parent, child, key);

    }

    void display(Node *nextNode)
    {
        // base case
        if(nextNode == nullptr) {
            return;
        }
        
        // visit case
        std::cout << nextNode->value_.second << std::endl;
        // recursive case
        return display(nextNode->left_);
        return display(nextNode->right_);
    }
};