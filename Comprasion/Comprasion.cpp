#include <iostream>
#include "greater_than_or_equal.h"
#include "geometricMean.h"

using namespace std;

void main() {
    int a_size, b_size;

    cout << "Enter A size: ";
    cin >> a_size;

    double* array1 = new double[a_size];

    for (int i = 0; i < a_size; i++) {
        cout << "A" << i + 1 << ") ";
        cin >> array1[i];
    }

    cout << "Enter B size: ";
    cin >> b_size;

    double* array2 = new double[b_size];

    for (int i = 0; i < b_size; i++) {
        cout << "B" << i + 1 << ") ";
        cin >> array2[i];
    }

    cout << "-Result-" << endl;

    if (greater_than_or_equal(array1[0], array2[0]))
        cout << "A[0] >= B[0]" << endl;
    else 
        cout << "A[0] < B[0]" << endl;

    if (greater_than_or_equal(geometricMean(array1, a_size), geometricMean(array2, b_size)))
        cout << "GM(A) >= GM(B)" << endl;
    else
        cout << "GM(A) < GM(B)" << endl;


    delete[] array1;
    delete[] array2;
}