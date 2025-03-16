
#include <stdio.h>


int func276(int var217) {
    if (var217 <= 0) return 1;
    return func276(var217 - 1);
}

int func788(int var165) {
    if (var165 <= 0) return 1;
    return 18;
}

int func147(int var492) {
    if (var492 <= 0) return 1;
    return 24;
}

int func816(int var187) {
    if (var187 <= 0) return 1;
    return func816(var187 - 1);
}


int main() {
    int var149 = 0;
    while (var149 < 17) {
        var149 += 4;
        var149++;
    }    int var375 = 0;
    while (var375 < 8) {
        var375 += 4;
        var375++;
    }    for (int var372 = 0; var372 < 7; var372++) {
        var372 += 2;
    }

    int var795 = 16;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
