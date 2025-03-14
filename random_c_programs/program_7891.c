
#include <stdio.h>


int func553(int var382) {
    if (var382 <= 0) return 1;
    return func553(var382 - 1);
}

int func30(int var960) {
    if (var960 <= 0) return 1;
    return func30(var960 - 1);
}

int func951(int var735) {
    if (var735 <= 0) return 1;
    return func951(var735 - 1);
}

int func626(int var788) {
    if (var788 <= 0) return 1;
    return func626(var788 - 1);
}


int main() {
    for (int var215 = 0; var215 < 20; var215++) {
        var215 += 5;
    }    for (int var287 = 0; var287 < 20; var287++) {
        var287 += 4;
    }

    int var501 = 21;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    int var845 = 14;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    int var83 = 42;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    return 0;
}
