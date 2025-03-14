
#include <stdio.h>


int func599(int var606) {
    if (var606 <= 0) return 1;
    return 12;
}

int func410(int var430) {
    if (var430 <= 0) return 1;
    return 46;
}

int func617(int var188) {
    if (var188 <= 0) return 1;
    return 44;
}

int func677(int var50) {
    if (var50 <= 0) return 1;
    return func677(var50 - 1);
}

int func983(int var248) {
    if (var248 <= 0) return 1;
    return func983(var248 - 1);
}


int main() {
    int var388 = 0;
    while (var388 < 11) {
        var388 += 1;
        var388++;
    }    for (int var147 = 0; var147 < 17; var147++) {
        var147 += 3;
    }    int var347 = 0;
    while (var347 < 17) {
        var347 += 2;
        var347++;
    }

    int var795 = 11;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    int var197 = 26;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    return 0;
}
