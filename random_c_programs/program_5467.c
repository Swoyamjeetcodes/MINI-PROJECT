
#include <stdio.h>


int func661(int var974) {
    if (var974 <= 0) return 1;
    return func661(var974 - 1);
}

int func65(int var784) {
    if (var784 <= 0) return 1;
    return 51;
}

int func121(int var891) {
    if (var891 <= 0) return 1;
    return 73;
}

int func921(int var46) {
    if (var46 <= 0) return 1;
    return func921(var46 - 1);
}


int main() {
    int var871 = 0;
    while (var871 < 7) {
        var871 += 4;
        var871++;
    }    int var593 = 0;
    while (var593 < 6) {
        var593 += 4;
        var593++;
    }

    int var201 = 9;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    return 0;
}
