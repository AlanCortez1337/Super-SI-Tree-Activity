#include "node.hpp"
#include <memory>
#include <iostream>

template <typename Key, typename Value>
class BST
{
public:
    // Constructor
    BST(std::pair<Key, Value> value) : root_(value) {}

    Node *GetLeft() const { return root_->left_; }
    Node *GetRight() const { return root_->right_; }

    // 💡HINT: Remember to check Betten's implementation example and also how we traversed a tree for guidance.
    void insert(std::pair<Key, Value> value)
    {
        //STEP 1: initialize variables
        Node<Key, Value> *  current = root_;
        Node<Key, Value> *  parent  = nullptr;
        Node<Key, Value> ** child   = &root_; 

        // STEP 2: SEARCH
        insert_search(current, parent, child);

        // STEP 3: INSERT

    }

    void display()
    {
        display(root_);
    }

private:
    Node<Key, Value> *root_;

    Node<Key, Value>** insert_search(Node<Key, Value> * &current, Node<Key, Value> * &parent, Node<Key, Value> ** &child)
    {
        
    }

    void display(Node *nextNode)
    {
        // base case
        if(nextNode == nullptr) {
            return
        }
        
        // recursive case
        // 💡HINT: unlike recursing through linked lists where there is only one node, a tree has two nodes to check
        return display(nextNode->GetLeft());
        // visit case
        std::cout << nextNode->value_.second << std::endl;
        return display(nextNode->GetRight());
    }
};