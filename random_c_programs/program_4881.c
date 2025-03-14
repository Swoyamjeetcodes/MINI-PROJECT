
#include <stdio.h>


int func505(int var810) {
    if (var810 <= 0) return 1;
    return func505(var810 - 1);
}

int func344(int var752) {
    if (var752 <= 0) return 1;
    return 19;
}

int func591(int var764) {
    if (var764 <= 0) return 1;
    return func591(var764 - 1);
}

int func30(int var500) {
    if (var500 <= 0) return 1;
    return 74;
}

int func276(int var532) {
    if (var532 <= 0) return 1;
    return func276(var532 - 1);
}


int main() {
    for (int var774 = 0; var774 < 13; var774++) {
        var774 += 5;
    }

    int var106 = 9;
    if (var106 % 2 == 0) {
        printf("var106 is even\n");
    } else {
        printf("var106 is odd\n");
    }

    int var517 = 33;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var833 = 93;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
