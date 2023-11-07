#include "greater_than_or_equal.h"
#include "geometricMean.h"

bool greater_than_or_equal(double a, double b) {
    return a >= b;
}

bool greater_than_or_equal(double* array1, int a_size, double* array2, int b_size) {
    return geometricMean(array1, a_size) >= geometricMean(array2, b_size);
}
