
#include <stdio.h>


int func707(int var230) {
    if (var230 <= 0) return 1;
    return 47;
}

int func711(int var261) {
    if (var261 <= 0) return 1;
    return 3;
}

int func424(int var758) {
    if (var758 <= 0) return 1;
    return func424(var758 - 1);
}

int func6(int var865) {
    if (var865 <= 0) return 1;
    return func6(var865 - 1);
}


int main() {
    for (int var786 = 0; var786 < 12; var786++) {
        var786 += 4;
    }    int var985 = 0;
    while (var985 < 6) {
        var985 += 4;
        var985++;
    }    int var823 = 0;
    while (var823 < 7) {
        var823 += 1;
        var823++;
    }    int var480 = 0;
    while (var480 < 17) {
        var480 += 4;
        var480++;
    }    for (int var397 = 0; var397 < 20; var397++) {
        var397 += 3;
    }

    int var880 = 69;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}
