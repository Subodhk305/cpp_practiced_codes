#include <iostream>
#include <vector>
using namespace std;

struct SparseElement {
    int row;
    int col;
    int value;
};

int main() {
    int rows1, rows2, columns1, columns2;
    cout << "Enter the number of rows in the first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns in the first matrix: ";
    cin >> columns1;

    cout << "Enter the number of rows in the second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns in the second matrix: ";
    cin >> columns2;

    if (rows1 != rows2 || columns1 != columns2) {
        cout << "Matrix addition is not possible. Matrices must have the same dimensions." << endl;
        return 1; // Exit with an error code
    }

    vector<SparseElement> sparseMatrixA;
    vector<SparseElement> sparseMatrixB;
    vector<SparseElement> sparseMatrixC;

    // Input for matrix A
    cout << "Enter non-zero elements for the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            int element;
            cin >> element;
            if (element != 0) {
                SparseElement e = {i, j, element};
                sparseMatrixA.push_back(e);
            }
        }
    }

    // Input for matrix B
    cout << "Enter non-zero elements for the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            int element;
            cin >> element;
            if (element != 0) {
                SparseElement e = {i, j, element};
                sparseMatrixB.push_back(e);
            }
        }
    }

    // Perform sparse matrix addition
    if (sparseMatrixA.size() != sparseMatrixB.size()) {
        cout << "Matrix addition is not possible. Matrices have different non-zero element counts." << endl;
        return 1; // Exit with an error code
    }

    for (size_t i = 0; i < sparseMatrixA.size(); i++) {
        if (sparseMatrixA[i].row != sparseMatrixB[i].row || sparseMatrixA[i].col != sparseMatrixB[i].col) {
            cout << "Matrix addition is not possible. Matrices have different non-zero element positions." << endl;
            return 1; // Exit with an error code
        }

        SparseElement e = {sparseMatrixA[i].row, sparseMatrixA[i].col, sparseMatrixA[i].value + sparseMatrixB[i].value};
        sparseMatrixC.push_back(e);
    }

    // Display the resulting sparse matrix C
    cout << "Resulting sparse matrix after addition:" << endl;
    for (const SparseElement& e : sparseMatrixC) {
        cout << "(" << e.row << ", " << e.col << "): " << e.value << endl;
    }

    return 0;
}
    