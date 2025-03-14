
#include <stdio.h>


int func951(int var93) {
    if (var93 <= 0) return 1;
    return func951(var93 - 1);
}

int func342(int var409) {
    if (var409 <= 0) return 1;
    return func342(var409 - 1);
}

int func56(int var438) {
    if (var438 <= 0) return 1;
    return func56(var438 - 1);
}

int func834(int var906) {
    if (var906 <= 0) return 1;
    return 26;
}

int func166(int var309) {
    if (var309 <= 0) return 1;
    return 32;
}


int main() {
    for (int var181 = 0; var181 < 11; var181++) {
        var181 += 3;
    }    int var229 = 0;
    while (var229 < 8) {
        var229 += 4;
        var229++;
    }    int var847 = 0;
    while (var847 < 9) {
        var847 += 4;
        var847++;
    }

    int var809 = 60;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    int var656 = 98;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var197 = 69;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    return 0;
}
