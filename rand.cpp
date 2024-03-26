#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(time(nullptr));
    
    // Generate a random number between 0 and RAND_MAX
    int randomNum = rand();
    std::cout << "Random number: " << randomNum << std::endl;
    
    return 0;
}

