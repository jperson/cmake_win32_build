#include "sub1/sub1.h"

int add_10(const int x) {
    return x + SUB1_VALUE;
}

int add_20(const int x) {
    return add_10(add_10(x));
}
