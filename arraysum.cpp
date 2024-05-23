#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}
