
#include <stdio.h>


int func661(int var94) {
    if (var94 <= 0) return 1;
    return func661(var94 - 1);
}

int func939(int var208) {
    if (var208 <= 0) return 1;
    return func939(var208 - 1);
}

int func808(int var784) {
    if (var784 <= 0) return 1;
    return func808(var784 - 1);
}


int main() {
    for (int var642 = 0; var642 < 16; var642++) {
        var642 += 1;
    }    int var620 = 0;
    while (var620 < 7) {
        var620 += 2;
        var620++;
    }    int var276 = 0;
    while (var276 < 16) {
        var276 += 3;
        var276++;
    }    int var610 = 0;
    while (var610 < 17) {
        var610 += 3;
        var610++;
    }    int var203 = 0;
    while (var203 < 16) {
        var203 += 2;
        var203++;
    }    int var479 = 0;
    while (var479 < 8) {
        var479 += 2;
        var479++;
    }

    int var837 = 42;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    int var481 = 20;
    if (var481 % 2 == 0) {
        printf("var481 is even\n");
    } else {
        printf("var481 is odd\n");
    }

    int var7 = 41;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    return 0;
}
