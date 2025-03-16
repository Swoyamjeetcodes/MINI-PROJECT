
#include <stdio.h>


int func112(int var96) {
    if (var96 <= 0) return 1;
    return func112(var96 - 1);
}

int func57(int var184) {
    if (var184 <= 0) return 1;
    return func57(var184 - 1);
}

int func702(int var73) {
    if (var73 <= 0) return 1;
    return func702(var73 - 1);
}

int func828(int var138) {
    if (var138 <= 0) return 1;
    return func828(var138 - 1);
}

int func285(int var154) {
    if (var154 <= 0) return 1;
    return func285(var154 - 1);
}

int func433(int var629) {
    if (var629 <= 0) return 1;
    return func433(var629 - 1);
}

int func511(int var591) {
    if (var591 <= 0) return 1;
    return func511(var591 - 1);
}

int func346(int var473) {
    if (var473 <= 0) return 1;
    return func346(var473 - 1);
}


int main() {
    for (int var177 = 0; var177 < 9; var177++) {
        var177 += 2;
    }    int var800 = 0;
    while (var800 < 13) {
        var800 += 3;
        var800++;
    }    for (int var123 = 0; var123 < 20; var123++) {
        var123 += 2;
    }    for (int var274 = 0; var274 < 8; var274++) {
        var274 += 3;
    }    int var229 = 0;
    while (var229 < 12) {
        var229 += 2;
        var229++;
    }    int var415 = 0;
    while (var415 < 14) {
        var415 += 2;
        var415++;
    }    int var951 = 0;
    while (var951 < 8) {
        var951 += 4;
        var951++;
    }

    int var544 = 1;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
