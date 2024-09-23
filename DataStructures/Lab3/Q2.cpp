#include <iostream>
#include <list>

int main() {
    // Create a list, and an iterarit 'i' at the start of the list.
    std::list<int> list1 = {1, 3, 5, 7};
    std::list<int>::iterator iterator = list1.begin();

    // Move the iterator to position 3, then insert a 10 there.
    advance(iterator, 3);
    list1.insert(iterator, 10);

    // Iterate through every element, and print it.
    for (std::list<int>::iterator i = list1.begin(); 
    i != list1.end(); 
    i++)
        std::cout << *i << " ";

    return 0;
}