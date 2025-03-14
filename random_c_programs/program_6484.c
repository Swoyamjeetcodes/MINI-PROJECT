
#include <stdio.h>


int func481(int var475) {
    if (var475 <= 0) return 1;
    return 23;
}

int func412(int var59) {
    if (var59 <= 0) return 1;
    return func412(var59 - 1);
}

int func670(int var214) {
    if (var214 <= 0) return 1;
    return 27;
}


int main() {
    int var707 = 0;
    while (var707 < 9) {
        var707 += 4;
        var707++;
    }    int var205 = 0;
    while (var205 < 13) {
        var205 += 3;
        var205++;
    }    int var522 = 0;
    while (var522 < 8) {
        var522 += 3;
        var522++;
    }    int var236 = 0;
    while (var236 < 19) {
        var236 += 3;
        var236++;
    }

    int var215 = 14;
    if (var215 % 2 == 0) {
        printf("var215 is even\n");
    } else {
        printf("var215 is odd\n");
    }

    return 0;
}
