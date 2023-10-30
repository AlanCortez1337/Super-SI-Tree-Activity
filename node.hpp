template <typename Key, typename Value>
class Node
{
public:
    std::pair<Key, Value> value_;
    Node *right_;
    Node *left_;
    Node *parent_;

    Node(T value) : value_(value), left_(nullptr), right_(nullptr) {}
};