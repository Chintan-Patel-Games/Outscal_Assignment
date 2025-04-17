#include <iostream>
#include <vector>
#include <climits>

// Assignment - 1 : Priority queue using Array

class PriorityQueue {
private:
    struct Node {
        int element;
        int priority;
    };
    
    std::vector<Node> queue; // This will store our elements and their priorities
    
public:
    // Insert an element with a given priority
    void push(int element, int priority) {
        Node newNode = {element, priority};
        
        // Insert the new node at the correct position based on priority
        queue.push_back(newNode);
        
        // Rearranging the queue to maintain priority order (sort by priority)
        int i = queue.size() - 1;
        while (i > 0 && queue[i].priority > queue[i - 1].priority) {
            // Swap if current element has higher priority than the previous one
            std::swap(queue[i], queue[i - 1]);
            i--;
        }
    }

    // Delete the topmost element (i.e., the element with the maximum priority)
    void pop() {
        if (queue.empty()) {
            std::cout << "Priority Queue is empty.\n";
            return;
        }
        
        // Remove the element with the highest priority (first element in the queue)
        queue.erase(queue.begin());
    }

    // Return the element with the highest priority
    int front() {
        if (queue.empty()) {
            std::cout << "Priority Queue is empty.\n";
            return INT_MIN; // Indicates empty queue
        }
        return queue[0].element;
    }
};

int main() {
    PriorityQueue pq;
    
    pq.push(10, 2);
    pq.push(20, 1);
    pq.push(30, 3);
    pq.push(40, 2);
    
    std::cout << "Front element (highest priority): " << pq.front() << std::endl;
    
    pq.pop();
    std::cout << "Front element after pop: " << pq.front() << std::endl;
    
    pq.pop();
    std::cout << "Front element after pop: " << pq.front() << std::endl;
    
    pq.pop();
    std::cout << "Front element after pop: " << pq.front() << std::endl;
    
    pq.pop(); // At this point the queue should be empty
    std::cout << "Front element after last pop: " << pq.front() << std::endl;

    return 0;
}