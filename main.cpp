#include <iostream>
#include <vector> // Example: using a standard library

int main() {
    std::cout << "Hello from the Colab-GitHub C++ project!" << std::endl;
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    long long sum = 0;
    for (int num : numbers) {
        sum += +num;
    }
    std::cout << "Sum of numbers: " << sum << std::endl;
    return 0;
}
