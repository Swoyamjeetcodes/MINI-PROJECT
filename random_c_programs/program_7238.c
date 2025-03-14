
#include <stdio.h>


int func713(int var970) {
    if (var970 <= 0) return 1;
    return func713(var970 - 1);
}

int func861(int var304) {
    if (var304 <= 0) return 1;
    return 77;
}

int func648(int var927) {
    if (var927 <= 0) return 1;
    return 1;
}

int func804(int var122) {
    if (var122 <= 0) return 1;
    return func804(var122 - 1);
}

int func233(int var245) {
    if (var245 <= 0) return 1;
    return func233(var245 - 1);
}


int main() {
    for (int var657 = 0; var657 < 15; var657++) {
        var657 += 3;
    }    int var845 = 0;
    while (var845 < 20) {
        var845 += 1;
        var845++;
    }    int var236 = 0;
    while (var236 < 15) {
        var236 += 4;
        var236++;
    }

    int var50 = 38;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    int var51 = 10;
    if (var51 % 2 == 0) {
        printf("var51 is even\n");
    } else {
        printf("var51 is odd\n");
    }

    int var544 = 43;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
