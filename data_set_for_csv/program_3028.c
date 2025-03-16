
#include <stdio.h>


int func401(int var138) {
    if (var138 <= 0) return 1;
    return func401(var138 - 1);
}

int func182(int var279) {
    if (var279 <= 0) return 1;
    return 49;
}

int func384(int var201) {
    if (var201 <= 0) return 1;
    return 60;
}

int func874(int var790) {
    if (var790 <= 0) return 1;
    return 60;
}

int func679(int var579) {
    if (var579 <= 0) return 1;
    return 65;
}


int main() {
    int var560 = 0;
    while (var560 < 12) {
        var560 += 5;
        var560++;
    }    for (int var750 = 0; var750 < 18; var750++) {
        var750 += 1;
    }

    int var82 = 11;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    return 0;
}
