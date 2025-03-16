
#include <stdio.h>


int func362(int var924) {
    if (var924 <= 0) return 1;
    return func362(var924 - 1);
}

int func305(int var138) {
    if (var138 <= 0) return 1;
    return func305(var138 - 1);
}

int func516(int var309) {
    if (var309 <= 0) return 1;
    return 29;
}

int func766(int var650) {
    if (var650 <= 0) return 1;
    return 46;
}


int main() {
    for (int var791 = 0; var791 < 18; var791++) {
        var791 += 5;
    }    for (int var288 = 0; var288 < 8; var288++) {
        var288 += 2;
    }    int var819 = 0;
    while (var819 < 10) {
        var819 += 4;
        var819++;
    }

    int var829 = 36;
    if (var829 % 2 == 0) {
        printf("var829 is even\n");
    } else {
        printf("var829 is odd\n");
    }

    return 0;
}
