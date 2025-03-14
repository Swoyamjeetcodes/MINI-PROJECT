
#include <stdio.h>


int func501(int var883) {
    if (var883 <= 0) return 1;
    return func501(var883 - 1);
}

int func119(int var32) {
    if (var32 <= 0) return 1;
    return func119(var32 - 1);
}

int func873(int var866) {
    if (var866 <= 0) return 1;
    return 59;
}

int func487(int var433) {
    if (var433 <= 0) return 1;
    return func487(var433 - 1);
}

int func756(int var581) {
    if (var581 <= 0) return 1;
    return 13;
}


int main() {
    for (int var182 = 0; var182 < 7; var182++) {
        var182 += 4;
    }

    int var73 = 19;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    int var887 = 26;
    if (var887 % 2 == 0) {
        printf("var887 is even\n");
    } else {
        printf("var887 is odd\n");
    }

    return 0;
}
