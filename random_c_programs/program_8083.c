
#include <stdio.h>


int func591(int var201) {
    if (var201 <= 0) return 1;
    return func591(var201 - 1);
}

int func411(int var939) {
    if (var939 <= 0) return 1;
    return 13;
}

int func854(int var682) {
    if (var682 <= 0) return 1;
    return func854(var682 - 1);
}

int func279(int var577) {
    if (var577 <= 0) return 1;
    return func279(var577 - 1);
}


int main() {
    int var83 = 0;
    while (var83 < 20) {
        var83 += 5;
        var83++;
    }    for (int var388 = 0; var388 < 13; var388++) {
        var388 += 1;
    }

    int var386 = 52;
    if (var386 % 2 == 0) {
        printf("var386 is even\n");
    } else {
        printf("var386 is odd\n");
    }

    int var206 = 0;
    if (var206 % 2 == 0) {
        printf("var206 is even\n");
    } else {
        printf("var206 is odd\n");
    }

    int var33 = 15;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    return 0;
}
