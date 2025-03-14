
#include <stdio.h>


int func842(int var234) {
    if (var234 <= 0) return 1;
    return 47;
}

int func615(int var335) {
    if (var335 <= 0) return 1;
    return func615(var335 - 1);
}

int func677(int var153) {
    if (var153 <= 0) return 1;
    return 42;
}

int func407(int var638) {
    if (var638 <= 0) return 1;
    return func407(var638 - 1);
}

int func822(int var200) {
    if (var200 <= 0) return 1;
    return func822(var200 - 1);
}


int main() {
    int var454 = 0;
    while (var454 < 17) {
        var454 += 1;
        var454++;
    }    int var135 = 0;
    while (var135 < 18) {
        var135 += 2;
        var135++;
    }

    int var734 = 5;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    int var358 = 61;
    if (var358 % 2 == 0) {
        printf("var358 is even\n");
    } else {
        printf("var358 is odd\n");
    }

    int var337 = 24;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    return 0;
}
