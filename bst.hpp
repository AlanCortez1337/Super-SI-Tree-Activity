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

    // ⭐TODO: finish the insert function so that it starts the recursive function
    // 💡HINT: you might want to use the overloaded insert function to do the recursion
    void insert(std::pair<Key, Value> value)
    {
    }

    // ⭐TODO: finish the display function so that it starts the recursive function
    // 💡HINT: you might want to use the overloaded display function to do the recursion
    void display()
    {
        display(root_);
    }

private:
    Node<Key, Value> *root_;

    void insert(std::pair<Key, Value> value, Node *nextNode)
    {
        // base case

        // visit case

        // recursive case
        // 💡HINT: unlike recursing through linked lists where there is only one node, a tree has two nodes to check
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