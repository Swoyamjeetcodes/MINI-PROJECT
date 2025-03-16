
#include <stdio.h>


int func239(int var993) {
    if (var993 <= 0) return 1;
    return 75;
}

int func860(int var882) {
    if (var882 <= 0) return 1;
    return func860(var882 - 1);
}

int func702(int var436) {
    if (var436 <= 0) return 1;
    return func702(var436 - 1);
}

int func170(int var275) {
    if (var275 <= 0) return 1;
    return 33;
}


int main() {
    int var302 = 0;
    while (var302 < 17) {
        var302 += 4;
        var302++;
    }    for (int var429 = 0; var429 < 17; var429++) {
        var429 += 2;
    }

    int var271 = 84;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    int var105 = 91;
    if (var105 % 2 == 0) {
        printf("var105 is even\n");
    } else {
        printf("var105 is odd\n");
    }

    return 0;
}
