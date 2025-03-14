
#include <stdio.h>


int func331(int var901) {
    if (var901 <= 0) return 1;
    return 95;
}

int func716(int var125) {
    if (var125 <= 0) return 1;
    return func716(var125 - 1);
}

int func815(int var661) {
    if (var661 <= 0) return 1;
    return func815(var661 - 1);
}

int func425(int var26) {
    if (var26 <= 0) return 1;
    return func425(var26 - 1);
}


int main() {
    int var309 = 0;
    while (var309 < 15) {
        var309 += 5;
        var309++;
    }

    int var7 = 42;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    return 0;
}
