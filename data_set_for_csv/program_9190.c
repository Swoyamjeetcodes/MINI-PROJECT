
#include <stdio.h>


int func379(int var202) {
    if (var202 <= 0) return 1;
    return 47;
}

int func542(int var162) {
    if (var162 <= 0) return 1;
    return func542(var162 - 1);
}

int func903(int var968) {
    if (var968 <= 0) return 1;
    return func903(var968 - 1);
}

int func762(int var115) {
    if (var115 <= 0) return 1;
    return 52;
}


int main() {
    for (int var483 = 0; var483 < 19; var483++) {
        var483 += 1;
    }    int var854 = 0;
    while (var854 < 14) {
        var854 += 2;
        var854++;
    }    for (int var395 = 0; var395 < 19; var395++) {
        var395 += 3;
    }    for (int var424 = 0; var424 < 12; var424++) {
        var424 += 1;
    }    int var17 = 0;
    while (var17 < 19) {
        var17 += 2;
        var17++;
    }    for (int var18 = 0; var18 < 12; var18++) {
        var18 += 3;
    }

    int var873 = 51;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    return 0;
}
