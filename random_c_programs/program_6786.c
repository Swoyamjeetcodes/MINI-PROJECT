
#include <stdio.h>


int func118(int var303) {
    if (var303 <= 0) return 1;
    return 99;
}

int func115(int var402) {
    if (var402 <= 0) return 1;
    return 87;
}

int func882(int var657) {
    if (var657 <= 0) return 1;
    return func882(var657 - 1);
}

int func401(int var471) {
    if (var471 <= 0) return 1;
    return func401(var471 - 1);
}

int func981(int var228) {
    if (var228 <= 0) return 1;
    return func981(var228 - 1);
}

int func889(int var672) {
    if (var672 <= 0) return 1;
    return func889(var672 - 1);
}

int func37(int var224) {
    if (var224 <= 0) return 1;
    return 39;
}


int main() {
    int var348 = 0;
    while (var348 < 19) {
        var348 += 3;
        var348++;
    }    for (int var825 = 0; var825 < 19; var825++) {
        var825 += 4;
    }    int var391 = 0;
    while (var391 < 10) {
        var391 += 5;
        var391++;
    }    int var102 = 0;
    while (var102 < 6) {
        var102 += 4;
        var102++;
    }    for (int var740 = 0; var740 < 14; var740++) {
        var740 += 3;
    }

    int var105 = 97;
    if (var105 % 2 == 0) {
        printf("var105 is even\n");
    } else {
        printf("var105 is odd\n");
    }

    return 0;
}
