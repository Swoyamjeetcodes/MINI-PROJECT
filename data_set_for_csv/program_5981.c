
#include <stdio.h>


int func343(int var945) {
    if (var945 <= 0) return 1;
    return func343(var945 - 1);
}


int main() {
    int var47 = 0;
    while (var47 < 17) {
        var47 += 2;
        var47++;
    }

    int var248 = 71;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
