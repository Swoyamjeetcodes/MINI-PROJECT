
#include <stdio.h>


int func929(int var563) {
    if (var563 <= 0) return 1;
    return func929(var563 - 1);
}

int func976(int var660) {
    if (var660 <= 0) return 1;
    return func976(var660 - 1);
}

int func48(int var677) {
    if (var677 <= 0) return 1;
    return 31;
}

int func12(int var690) {
    if (var690 <= 0) return 1;
    return func12(var690 - 1);
}

int func649(int var439) {
    if (var439 <= 0) return 1;
    return func649(var439 - 1);
}


int main() {
    int var76 = 0;
    while (var76 < 16) {
        var76 += 2;
        var76++;
    }

    int var514 = 79;
    if (var514 % 2 == 0) {
        printf("var514 is even\n");
    } else {
        printf("var514 is odd\n");
    }

    int var89 = 19;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    return 0;
}
