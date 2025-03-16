
#include <stdio.h>


int func399(int var625) {
    if (var625 <= 0) return 1;
    return 26;
}

int func372(int var928) {
    if (var928 <= 0) return 1;
    return func372(var928 - 1);
}

int func803(int var738) {
    if (var738 <= 0) return 1;
    return 63;
}

int func173(int var344) {
    if (var344 <= 0) return 1;
    return func173(var344 - 1);
}


int main() {
    for (int var817 = 0; var817 < 16; var817++) {
        var817 += 3;
    }    int var61 = 0;
    while (var61 < 7) {
        var61 += 5;
        var61++;
    }    for (int var935 = 0; var935 < 15; var935++) {
        var935 += 5;
    }

    int var802 = 7;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    int var49 = 34;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    return 0;
}
