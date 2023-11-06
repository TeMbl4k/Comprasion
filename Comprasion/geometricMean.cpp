#include "geometricMean.h"
#include <cmath>

double geometricMean(double* array, int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= array[i];
    }
    return pow(product, 1.0 / size);
}