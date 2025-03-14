
#include <stdio.h>


int func189(int var92) {
    if (var92 <= 0) return 1;
    return func189(var92 - 1);
}

int func645(int var969) {
    if (var969 <= 0) return 1;
    return func645(var969 - 1);
}

int func223(int var90) {
    if (var90 <= 0) return 1;
    return func223(var90 - 1);
}

int func540(int var237) {
    if (var237 <= 0) return 1;
    return func540(var237 - 1);
}


int main() {
    for (int var910 = 0; var910 < 8; var910++) {
        var910 += 3;
    }    int var331 = 0;
    while (var331 < 14) {
        var331 += 2;
        var331++;
    }    int var28 = 0;
    while (var28 < 11) {
        var28 += 2;
        var28++;
    }

    int var592 = 60;
    if (var592 % 2 == 0) {
        printf("var592 is even\n");
    } else {
        printf("var592 is odd\n");
    }

    int var882 = 58;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
