
#include <stdio.h>


int func659(int var554) {
    if (var554 <= 0) return 1;
    return 20;
}

int func162(int var546) {
    if (var546 <= 0) return 1;
    return 98;
}

int func976(int var402) {
    if (var402 <= 0) return 1;
    return func976(var402 - 1);
}


int main() {
    int var653 = 0;
    while (var653 < 18) {
        var653 += 1;
        var653++;
    }

    int var481 = 18;
    if (var481 % 2 == 0) {
        printf("var481 is even\n");
    } else {
        printf("var481 is odd\n");
    }

    return 0;
}
