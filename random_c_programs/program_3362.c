
#include <stdio.h>


int func931(int var792) {
    if (var792 <= 0) return 1;
    return func931(var792 - 1);
}

int func20(int var219) {
    if (var219 <= 0) return 1;
    return func20(var219 - 1);
}

int func447(int var667) {
    if (var667 <= 0) return 1;
    return 72;
}

int func796(int var502) {
    if (var502 <= 0) return 1;
    return 58;
}


int main() {
    int var17 = 0;
    while (var17 < 17) {
        var17 += 5;
        var17++;
    }    int var105 = 0;
    while (var105 < 8) {
        var105 += 4;
        var105++;
    }    int var815 = 0;
    while (var815 < 13) {
        var815 += 1;
        var815++;
    }    int var40 = 0;
    while (var40 < 10) {
        var40 += 1;
        var40++;
    }    int var278 = 0;
    while (var278 < 7) {
        var278 += 4;
        var278++;
    }

    int var827 = 16;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    int var595 = 96;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    int var525 = 100;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    return 0;
}
