
#include <stdio.h>


int func104(int var850) {
    if (var850 <= 0) return 1;
    return func104(var850 - 1);
}

int func637(int var503) {
    if (var503 <= 0) return 1;
    return func637(var503 - 1);
}

int func149(int var934) {
    if (var934 <= 0) return 1;
    return 30;
}

int func573(int var155) {
    if (var155 <= 0) return 1;
    return func573(var155 - 1);
}

int func983(int var477) {
    if (var477 <= 0) return 1;
    return func983(var477 - 1);
}


int main() {
    for (int var195 = 0; var195 < 16; var195++) {
        var195 += 2;
    }    int var691 = 0;
    while (var691 < 19) {
        var691 += 3;
        var691++;
    }    int var716 = 0;
    while (var716 < 16) {
        var716 += 1;
        var716++;
    }

    int var696 = 25;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    int var525 = 31;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    int var362 = 91;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    int var670 = 7;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    return 0;
}
