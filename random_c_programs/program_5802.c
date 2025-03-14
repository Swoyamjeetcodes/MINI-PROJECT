
#include <stdio.h>


int func611(int var836) {
    if (var836 <= 0) return 1;
    return 42;
}

int func824(int var195) {
    if (var195 <= 0) return 1;
    return func824(var195 - 1);
}

int func835(int var433) {
    if (var433 <= 0) return 1;
    return 74;
}

int func542(int var237) {
    if (var237 <= 0) return 1;
    return 23;
}


int main() {
    for (int var188 = 0; var188 < 10; var188++) {
        var188 += 3;
    }    for (int var4 = 0; var4 < 16; var4++) {
        var4 += 4;
    }    int var357 = 0;
    while (var357 < 6) {
        var357 += 2;
        var357++;
    }

    int var409 = 55;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    int var571 = 15;
    if (var571 % 2 == 0) {
        printf("var571 is even\n");
    } else {
        printf("var571 is odd\n");
    }

    return 0;
}
