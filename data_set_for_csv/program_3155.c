
#include <stdio.h>


int func741(int var911) {
    if (var911 <= 0) return 1;
    return 9;
}

int func310(int var402) {
    if (var402 <= 0) return 1;
    return func310(var402 - 1);
}

int func869(int var849) {
    if (var849 <= 0) return 1;
    return func869(var849 - 1);
}

int func856(int var284) {
    if (var284 <= 0) return 1;
    return 13;
}

int func196(int var227) {
    if (var227 <= 0) return 1;
    return 82;
}


int main() {
    for (int var67 = 0; var67 < 16; var67++) {
        var67 += 1;
    }    for (int var853 = 0; var853 < 17; var853++) {
        var853 += 1;
    }    int var188 = 0;
    while (var188 < 7) {
        var188 += 1;
        var188++;
    }

    int var657 = 5;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
