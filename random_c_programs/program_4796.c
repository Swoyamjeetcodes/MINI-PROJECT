
#include <stdio.h>


int func838(int var511) {
    if (var511 <= 0) return 1;
    return 7;
}

int func506(int var610) {
    if (var610 <= 0) return 1;
    return 22;
}

int func365(int var833) {
    if (var833 <= 0) return 1;
    return func365(var833 - 1);
}


int main() {
    int var945 = 0;
    while (var945 < 12) {
        var945 += 4;
        var945++;
    }    int var423 = 0;
    while (var423 < 5) {
        var423 += 1;
        var423++;
    }

    int var982 = 12;
    if (var982 % 2 == 0) {
        printf("var982 is even\n");
    } else {
        printf("var982 is odd\n");
    }

    return 0;
}
