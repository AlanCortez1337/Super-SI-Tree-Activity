#include "bst.hpp"
#include <string>

int main()
{
    BST<std::size_t, std::string> tree({4, "Patrick"});

    // 🛑STOP: BE SURE TO FINISH bst.hpp BEFORE RUNNING THE CODE 🛑

    std::pair<std::size_t, std::string> val1 = {2, "John"};
    std::pair<std::size_t, std::string> val2 = {1, "Bailey"};
    std::pair<std::size_t, std::string> val3 = {3, "Cesar"};
    std::pair<std::size_t, std::string> val4 = {5, "John"};
    tree.insert(val1);
    tree.insert(val2);
    tree.insert(val3);
    tree.insert(val4);

    tree.display();

    return 0;
}