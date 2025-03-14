
#include <stdio.h>


int func407(int var433) {
    if (var433 <= 0) return 1;
    return func407(var433 - 1);
}

int func62(int var184) {
    if (var184 <= 0) return 1;
    return func62(var184 - 1);
}

int func789(int var642) {
    if (var642 <= 0) return 1;
    return func789(var642 - 1);
}

int func366(int var526) {
    if (var526 <= 0) return 1;
    return func366(var526 - 1);
}

int func38(int var607) {
    if (var607 <= 0) return 1;
    return 8;
}

int func610(int var759) {
    if (var759 <= 0) return 1;
    return func610(var759 - 1);
}

int func300(int var671) {
    if (var671 <= 0) return 1;
    return 23;
}


int main() {
    for (int var940 = 0; var940 < 12; var940++) {
        var940 += 5;
    }    for (int var871 = 0; var871 < 20; var871++) {
        var871 += 1;
    }    int var137 = 0;
    while (var137 < 12) {
        var137 += 5;
        var137++;
    }    int var920 = 0;
    while (var920 < 18) {
        var920 += 2;
        var920++;
    }

    int var964 = 59;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    int var747 = 59;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    return 0;
}
