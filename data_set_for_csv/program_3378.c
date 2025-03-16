
#include <stdio.h>


int func190(int var433) {
    if (var433 <= 0) return 1;
    return func190(var433 - 1);
}

int func585(int var288) {
    if (var288 <= 0) return 1;
    return func585(var288 - 1);
}

int func787(int var185) {
    if (var185 <= 0) return 1;
    return func787(var185 - 1);
}

int func281(int var716) {
    if (var716 <= 0) return 1;
    return func281(var716 - 1);
}


int main() {
    for (int var592 = 0; var592 < 9; var592++) {
        var592 += 1;
    }

    int var589 = 78;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    int var552 = 86;
    if (var552 % 2 == 0) {
        printf("var552 is even\n");
    } else {
        printf("var552 is odd\n");
    }

    return 0;
}
