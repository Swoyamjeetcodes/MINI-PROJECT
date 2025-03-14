
#include <stdio.h>


int func277(int var644) {
    if (var644 <= 0) return 1;
    return func277(var644 - 1);
}

int func429(int var199) {
    if (var199 <= 0) return 1;
    return func429(var199 - 1);
}

int func791(int var462) {
    if (var462 <= 0) return 1;
    return func791(var462 - 1);
}

int func561(int var953) {
    if (var953 <= 0) return 1;
    return func561(var953 - 1);
}

int func441(int var482) {
    if (var482 <= 0) return 1;
    return func441(var482 - 1);
}

int func7(int var919) {
    if (var919 <= 0) return 1;
    return 32;
}


int main() {
    for (int var555 = 0; var555 < 18; var555++) {
        var555 += 4;
    }    for (int var562 = 0; var562 < 13; var562++) {
        var562 += 2;
    }    for (int var702 = 0; var702 < 13; var702++) {
        var702 += 4;
    }    int var692 = 0;
    while (var692 < 18) {
        var692 += 5;
        var692++;
    }    int var233 = 0;
    while (var233 < 5) {
        var233 += 1;
        var233++;
    }

    int var251 = 23;
    if (var251 % 2 == 0) {
        printf("var251 is even\n");
    } else {
        printf("var251 is odd\n");
    }

    int var65 = 33;
    if (var65 % 2 == 0) {
        printf("var65 is even\n");
    } else {
        printf("var65 is odd\n");
    }

    return 0;
}
