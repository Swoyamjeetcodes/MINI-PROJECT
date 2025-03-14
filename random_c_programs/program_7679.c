
#include <stdio.h>


int func561(int var250) {
    if (var250 <= 0) return 1;
    return func561(var250 - 1);
}

int func926(int var112) {
    if (var112 <= 0) return 1;
    return func926(var112 - 1);
}

int func754(int var496) {
    if (var496 <= 0) return 1;
    return func754(var496 - 1);
}

int func547(int var185) {
    if (var185 <= 0) return 1;
    return 37;
}


int main() {
    for (int var55 = 0; var55 < 14; var55++) {
        var55 += 4;
    }    int var893 = 0;
    while (var893 < 17) {
        var893 += 2;
        var893++;
    }    int var315 = 0;
    while (var315 < 7) {
        var315 += 2;
        var315++;
    }

    int var665 = 79;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    int var672 = 76;
    if (var672 % 2 == 0) {
        printf("var672 is even\n");
    } else {
        printf("var672 is odd\n");
    }

    int var875 = 66;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    return 0;
}
