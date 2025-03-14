
#include <stdio.h>


int func303(int var832) {
    if (var832 <= 0) return 1;
    return 63;
}

int func601(int var836) {
    if (var836 <= 0) return 1;
    return func601(var836 - 1);
}

int func878(int var502) {
    if (var502 <= 0) return 1;
    return func878(var502 - 1);
}

int func563(int var317) {
    if (var317 <= 0) return 1;
    return 7;
}


int main() {
    int var172 = 0;
    while (var172 < 6) {
        var172 += 2;
        var172++;
    }    for (int var800 = 0; var800 < 20; var800++) {
        var800 += 4;
    }

    int var214 = 10;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    int var395 = 72;
    if (var395 % 2 == 0) {
        printf("var395 is even\n");
    } else {
        printf("var395 is odd\n");
    }

    return 0;
}
