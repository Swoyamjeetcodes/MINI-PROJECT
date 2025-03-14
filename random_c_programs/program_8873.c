
#include <stdio.h>


int func4(int var167) {
    if (var167 <= 0) return 1;
    return 43;
}

int func293(int var157) {
    if (var157 <= 0) return 1;
    return func293(var157 - 1);
}

int func230(int var203) {
    if (var203 <= 0) return 1;
    return 50;
}

int func177(int var840) {
    if (var840 <= 0) return 1;
    return func177(var840 - 1);
}


int main() {
    for (int var570 = 0; var570 < 14; var570++) {
        var570 += 3;
    }    int var185 = 0;
    while (var185 < 14) {
        var185 += 2;
        var185++;
    }    for (int var462 = 0; var462 < 6; var462++) {
        var462 += 3;
    }    int var566 = 0;
    while (var566 < 17) {
        var566 += 4;
        var566++;
    }    for (int var802 = 0; var802 < 10; var802++) {
        var802 += 5;
    }

    int var837 = 1;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    int var431 = 39;
    if (var431 % 2 == 0) {
        printf("var431 is even\n");
    } else {
        printf("var431 is odd\n");
    }

    int var313 = 79;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    int var918 = 93;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    return 0;
}
