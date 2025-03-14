
#include <stdio.h>


int func513(int var392) {
    if (var392 <= 0) return 1;
    return func513(var392 - 1);
}


int main() {
    int var539 = 0;
    while (var539 < 10) {
        var539 += 4;
        var539++;
    }

    int var945 = 47;
    if (var945 % 2 == 0) {
        printf("var945 is even\n");
    } else {
        printf("var945 is odd\n");
    }

    return 0;
}
