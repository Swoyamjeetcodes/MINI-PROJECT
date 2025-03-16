
#include <stdio.h>


int func93(int var804) {
    if (var804 <= 0) return 1;
    return 34;
}

int func154(int var120) {
    if (var120 <= 0) return 1;
    return func154(var120 - 1);
}

int func535(int var254) {
    if (var254 <= 0) return 1;
    return func535(var254 - 1);
}

int func600(int var726) {
    if (var726 <= 0) return 1;
    return 18;
}


int main() {
    for (int var689 = 0; var689 < 18; var689++) {
        var689 += 5;
    }    int var45 = 0;
    while (var45 < 20) {
        var45 += 2;
        var45++;
    }    int var930 = 0;
    while (var930 < 6) {
        var930 += 4;
        var930++;
    }    int var499 = 0;
    while (var499 < 19) {
        var499 += 4;
        var499++;
    }

    int var517 = 87;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var832 = 18;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    return 0;
}
