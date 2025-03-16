
#include <stdio.h>


int func233(int var670) {
    if (var670 <= 0) return 1;
    return func233(var670 - 1);
}

int func669(int var852) {
    if (var852 <= 0) return 1;
    return 46;
}

int func490(int var575) {
    if (var575 <= 0) return 1;
    return func490(var575 - 1);
}

int func942(int var647) {
    if (var647 <= 0) return 1;
    return 95;
}


int main() {
    for (int var139 = 0; var139 < 18; var139++) {
        var139 += 2;
    }    for (int var717 = 0; var717 < 15; var717++) {
        var717 += 4;
    }

    int var75 = 19;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    int var132 = 32;
    if (var132 % 2 == 0) {
        printf("var132 is even\n");
    } else {
        printf("var132 is odd\n");
    }

    return 0;
}
