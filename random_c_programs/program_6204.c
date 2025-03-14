
#include <stdio.h>


int func839(int var639) {
    if (var639 <= 0) return 1;
    return func839(var639 - 1);
}

int func544(int var673) {
    if (var673 <= 0) return 1;
    return func544(var673 - 1);
}


int main() {
    for (int var726 = 0; var726 < 18; var726++) {
        var726 += 5;
    }    int var791 = 0;
    while (var791 < 17) {
        var791 += 5;
        var791++;
    }    for (int var324 = 0; var324 < 6; var324++) {
        var324 += 3;
    }

    int var945 = 73;
    if (var945 % 2 == 0) {
        printf("var945 is even\n");
    } else {
        printf("var945 is odd\n");
    }

    return 0;
}
