#include <string>

class Node
{
public:
    std::pair<std::size_t, std::string> value_;
    Node *right_;
    Node *left_;
    Node *parent_;

    Node(std::pair<std::size_t, std::string> value) : value_(value), left_(nullptr), right_(nullptr) {}
};