
#include <stdio.h>


int func878(int var580) {
    if (var580 <= 0) return 1;
    return 93;
}

int func895(int var813) {
    if (var813 <= 0) return 1;
    return func895(var813 - 1);
}

int func350(int var259) {
    if (var259 <= 0) return 1;
    return func350(var259 - 1);
}

int func181(int var279) {
    if (var279 <= 0) return 1;
    return func181(var279 - 1);
}


int main() {
    int var547 = 0;
    while (var547 < 9) {
        var547 += 2;
        var547++;
    }    int var219 = 0;
    while (var219 < 6) {
        var219 += 5;
        var219++;
    }    int var149 = 0;
    while (var149 < 11) {
        var149 += 5;
        var149++;
    }

    int var183 = 60;
    if (var183 % 2 == 0) {
        printf("var183 is even\n");
    } else {
        printf("var183 is odd\n");
    }

    int var685 = 81;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    return 0;
}
