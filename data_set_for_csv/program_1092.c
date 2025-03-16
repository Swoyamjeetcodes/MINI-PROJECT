
#include <stdio.h>


int func831(int var178) {
    if (var178 <= 0) return 1;
    return func831(var178 - 1);
}

int func383(int var551) {
    if (var551 <= 0) return 1;
    return func383(var551 - 1);
}

int func885(int var271) {
    if (var271 <= 0) return 1;
    return func885(var271 - 1);
}

int func632(int var917) {
    if (var917 <= 0) return 1;
    return func632(var917 - 1);
}

int func892(int var860) {
    if (var860 <= 0) return 1;
    return 94;
}


int main() {
    int var12 = 0;
    while (var12 < 10) {
        var12 += 3;
        var12++;
    }    int var540 = 0;
    while (var540 < 18) {
        var540 += 2;
        var540++;
    }    int var336 = 0;
    while (var336 < 11) {
        var336 += 5;
        var336++;
    }

    int var193 = 35;
    if (var193 % 2 == 0) {
        printf("var193 is even\n");
    } else {
        printf("var193 is odd\n");
    }

    int var117 = 88;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    return 0;
}
