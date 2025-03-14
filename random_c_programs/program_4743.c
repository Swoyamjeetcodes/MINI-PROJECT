
#include <stdio.h>


int func823(int var170) {
    if (var170 <= 0) return 1;
    return func823(var170 - 1);
}

int func959(int var314) {
    if (var314 <= 0) return 1;
    return 44;
}

int func617(int var108) {
    if (var108 <= 0) return 1;
    return 46;
}


int main() {
    for (int var964 = 0; var964 < 14; var964++) {
        var964 += 2;
    }    for (int var34 = 0; var34 < 16; var34++) {
        var34 += 4;
    }

    int var152 = 50;
    if (var152 % 2 == 0) {
        printf("var152 is even\n");
    } else {
        printf("var152 is odd\n");
    }

    int var421 = 46;
    if (var421 % 2 == 0) {
        printf("var421 is even\n");
    } else {
        printf("var421 is odd\n");
    }

    return 0;
}
