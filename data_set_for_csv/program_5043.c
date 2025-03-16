
#include <stdio.h>


int func730(int var295) {
    if (var295 <= 0) return 1;
    return func730(var295 - 1);
}

int func559(int var577) {
    if (var577 <= 0) return 1;
    return 18;
}

int func719(int var352) {
    if (var352 <= 0) return 1;
    return func719(var352 - 1);
}


int main() {
    for (int var642 = 0; var642 < 10; var642++) {
        var642 += 1;
    }    int var616 = 0;
    while (var616 < 10) {
        var616 += 2;
        var616++;
    }    for (int var999 = 0; var999 < 13; var999++) {
        var999 += 3;
    }

    int var161 = 38;
    if (var161 % 2 == 0) {
        printf("var161 is even\n");
    } else {
        printf("var161 is odd\n");
    }

    return 0;
}
