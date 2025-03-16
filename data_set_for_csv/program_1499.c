
#include <stdio.h>


int func472(int var376) {
    if (var376 <= 0) return 1;
    return 81;
}

int func483(int var821) {
    if (var821 <= 0) return 1;
    return 80;
}

int func615(int var19) {
    if (var19 <= 0) return 1;
    return func615(var19 - 1);
}

int func219(int var189) {
    if (var189 <= 0) return 1;
    return 95;
}

int func557(int var857) {
    if (var857 <= 0) return 1;
    return func557(var857 - 1);
}


int main() {
    for (int var911 = 0; var911 < 16; var911++) {
        var911 += 4;
    }    int var197 = 0;
    while (var197 < 19) {
        var197 += 4;
        var197++;
    }    int var755 = 0;
    while (var755 < 5) {
        var755 += 3;
        var755++;
    }

    int var165 = 82;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    int var106 = 90;
    if (var106 % 2 == 0) {
        printf("var106 is even\n");
    } else {
        printf("var106 is odd\n");
    }

    return 0;
}
