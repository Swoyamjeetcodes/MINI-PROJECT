
#include <stdio.h>


int func241(int var511) {
    if (var511 <= 0) return 1;
    return 6;
}

int func798(int var203) {
    if (var203 <= 0) return 1;
    return func798(var203 - 1);
}

int func553(int var697) {
    if (var697 <= 0) return 1;
    return 67;
}

int func561(int var79) {
    if (var79 <= 0) return 1;
    return func561(var79 - 1);
}

int func897(int var497) {
    if (var497 <= 0) return 1;
    return 84;
}

int func678(int var724) {
    if (var724 <= 0) return 1;
    return 32;
}


int main() {
    for (int var679 = 0; var679 < 18; var679++) {
        var679 += 1;
    }    for (int var80 = 0; var80 < 16; var80++) {
        var80 += 3;
    }    int var236 = 0;
    while (var236 < 20) {
        var236 += 2;
        var236++;
    }    for (int var341 = 0; var341 < 14; var341++) {
        var341 += 5;
    }

    int var21 = 18;
    if (var21 % 2 == 0) {
        printf("var21 is even\n");
    } else {
        printf("var21 is odd\n");
    }

    return 0;
}
