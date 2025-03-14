
#include <stdio.h>


int func390(int var128) {
    if (var128 <= 0) return 1;
    return func390(var128 - 1);
}

int func504(int var927) {
    if (var927 <= 0) return 1;
    return 51;
}

int func228(int var261) {
    if (var261 <= 0) return 1;
    return 68;
}

int func101(int var791) {
    if (var791 <= 0) return 1;
    return 85;
}

int func316(int var623) {
    if (var623 <= 0) return 1;
    return func316(var623 - 1);
}

int func885(int var960) {
    if (var960 <= 0) return 1;
    return 88;
}


int main() {
    int var84 = 0;
    while (var84 < 11) {
        var84 += 4;
        var84++;
    }    int var91 = 0;
    while (var91 < 13) {
        var91 += 4;
        var91++;
    }    int var999 = 0;
    while (var999 < 7) {
        var999 += 5;
        var999++;
    }

    int var107 = 8;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    return 0;
}
