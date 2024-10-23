#include <stdio.h>
#include <assert.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Test function to validate the add method
void run_tests() {
    assert(add(2, 3) == 5); // Pass
    assert(add(0, 0) == 0); // Pass
    assert(add(-1, 1) == 0); // Pass

    // Uncomment the next line to simulate a failing test
    // assert(add(2, 2) == 5); // Fail

    printf("All tests passed!\n");
}

int main() {
    printf("Hello World\n");

    // Run the tests
    run_tests();

    return 0;
}
