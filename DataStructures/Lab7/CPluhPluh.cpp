#include <iostream>
#include <algorithm>
#include <vector>

void print(std::vector<float>& vc) {
    for (auto i : vc) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void pushHeap(std::vector<float>& vc, float element) {
    vc.push_back(element);
    std::push_heap(vc.begin(), vc.end());
}

int main() {
    // Initialize the original heap
    std::vector<float> heap = {10.0, 2.2, 6.1, 7.0, 8.7, 9.8};
    std::make_heap(heap.begin(), heap.end());
    std::cout << "Original heap: ";
    print(heap);

    // Add elements to heap
    pushHeap(heap, 2.5);
    pushHeap(heap, 10.0);
    pushHeap(heap, 11.2);
    pushHeap(heap, 5.6);
    pushHeap(heap, 7.8);
    pushHeap(heap, 10.2);
    pushHeap(heap, 3.2);
    pushHeap(heap, 9.8);
    std::cout << "Alterred heap: ";
    print(heap);

    // Delete root element
    std::pop_heap(heap.begin(), heap.end());
    heap.pop_back();
    std::cout << "Popped heap: ";
    print(heap);
    return 0;
}