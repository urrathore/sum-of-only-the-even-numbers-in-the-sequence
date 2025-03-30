#include <iostream>
#include <vector>

int main() {
    int a, d, b;

    // Input values for a, d, and b
    std::cout << "Enter values for a, d, and b: ";
    std::cin >> a >> d >> b;

    std::vector<int> sequence;
    int sum_of_evens = 0;

    // Generate the sequence
    for (int current = a; current <= b; current += d) {
        sequence.push_back(current);
        // Check if the current number is even
        if (current % 2 == 0) {
            sum_of_evens += current; // Sum of even numbers
        }
    }

    // Output the sequence
    std::cout << "Sequence: ";
    for (int num : sequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Output the sum of even numbers
    std::cout << "Sum of even numbers: " << sum_of_evens << std::endl;

    return 0;
}