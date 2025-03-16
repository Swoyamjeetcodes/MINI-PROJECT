
#include <stdio.h>


int func495(int var993) {
    if (var993 <= 0) return 1;
    return 50;
}

int func546(int var724) {
    if (var724 <= 0) return 1;
    return func546(var724 - 1);
}

int func758(int var354) {
    if (var354 <= 0) return 1;
    return 12;
}

int func713(int var819) {
    if (var819 <= 0) return 1;
    return func713(var819 - 1);
}


int main() {
    for (int var291 = 0; var291 < 17; var291++) {
        var291 += 5;
    }

    int var55 = 79;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    return 0;
}
