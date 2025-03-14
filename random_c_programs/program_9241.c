
#include <stdio.h>


int func657(int var945) {
    if (var945 <= 0) return 1;
    return func657(var945 - 1);
}


int main() {
    int var168 = 0;
    while (var168 < 5) {
        var168 += 4;
        var168++;
    }

    int var765 = 8;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    return 0;
}
