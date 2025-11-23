
//Author – Suraj Singh - 241507
#include <iostream> 
using namespace std; 

int main() { 
      int base, size, rows, cols; 
      int i, j; 
      cout << "Enter base address: "; 
      cin >> base; 
      cout << "Enter size of each element (in bytes): "; 
      cin >> size; 
      cout << "Enter number of rows: "; 
      cin >> rows; 
      cout << "Enter number of columns: "; 
      cin >> cols; 
      cout << "Enter index (i j) of element A[i][j]: "; 
      cin >> i >> j; 
      // Assuming lower bound is 0 for both dimensions 
      int L1 = 0, L2 = 0; 
      // Row-major address 
      int rowMajor = base + ((i - L1) * cols + (j - L2)) * size; 
      15 
      // Column-major address 
      int colMajor = base + ((j - L2) * rows + (i - L1)) * size; 
      cout << "\nAddress using Row-major formula: " << rowMajor; 
      cout << "\nAddress using Column-major formula: " << colMajor << 
      endl; 
      return 0; 
}
