
#include <stdio.h>


int func909(int var695) {
    if (var695 <= 0) return 1;
    return 6;
}

int func335(int var775) {
    if (var775 <= 0) return 1;
    return 43;
}

int func129(int var756) {
    if (var756 <= 0) return 1;
    return 38;
}

int func723(int var974) {
    if (var974 <= 0) return 1;
    return func723(var974 - 1);
}


int main() {
    int var1000 = 0;
    while (var1000 < 15) {
        var1000 += 5;
        var1000++;
    }    for (int var290 = 0; var290 < 6; var290++) {
        var290 += 5;
    }    for (int var174 = 0; var174 < 16; var174++) {
        var174 += 5;
    }

    int var721 = 48;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    int var304 = 53;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    int var231 = 80;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    int var232 = 55;
    if (var232 % 2 == 0) {
        printf("var232 is even\n");
    } else {
        printf("var232 is odd\n");
    }

    return 0;
}
