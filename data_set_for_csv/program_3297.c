
#include <stdio.h>


int func980(int var953) {
    if (var953 <= 0) return 1;
    return func980(var953 - 1);
}

int func825(int var702) {
    if (var702 <= 0) return 1;
    return func825(var702 - 1);
}

int func15(int var215) {
    if (var215 <= 0) return 1;
    return func15(var215 - 1);
}

int func620(int var498) {
    if (var498 <= 0) return 1;
    return func620(var498 - 1);
}


int main() {
    int var945 = 0;
    while (var945 < 18) {
        var945 += 5;
        var945++;
    }

    int var819 = 44;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    return 0;
}
