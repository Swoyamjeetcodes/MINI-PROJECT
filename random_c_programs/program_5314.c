
#include <stdio.h>


int func996(int var795) {
    if (var795 <= 0) return 1;
    return func996(var795 - 1);
}

int func541(int var721) {
    if (var721 <= 0) return 1;
    return func541(var721 - 1);
}

int func933(int var481) {
    if (var481 <= 0) return 1;
    return 16;
}

int func677(int var782) {
    if (var782 <= 0) return 1;
    return 9;
}

int func172(int var528) {
    if (var528 <= 0) return 1;
    return 24;
}


int main() {
    int var395 = 0;
    while (var395 < 17) {
        var395 += 3;
        var395++;
    }

    int var401 = 16;
    if (var401 % 2 == 0) {
        printf("var401 is even\n");
    } else {
        printf("var401 is odd\n");
    }

    int var870 = 97;
    if (var870 % 2 == 0) {
        printf("var870 is even\n");
    } else {
        printf("var870 is odd\n");
    }

    int var476 = 7;
    if (var476 % 2 == 0) {
        printf("var476 is even\n");
    } else {
        printf("var476 is odd\n");
    }

    return 0;
}
