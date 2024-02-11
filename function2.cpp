#include<iostream>
#include<fstream>
using namespace std;
int main() {
    const int rows = 4;
    const int cols = 4;

    // Declare a 4x4 matrix
    int matrix[rows][cols];

    // Input the matrix elements from the user
    std::cout << "Enter the elements of the 4x4 matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> matrix[i][j];
        }
    }

    // Print the matrix
    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // Find the maximum element in the matrix
    int maxElement = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    // Print the maximum element
    std::cout << "Maximum element in the matrix: " << maxElement << std::endl;

    return 0;
}

  
