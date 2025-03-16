
#include <stdio.h>


int func563(int var579) {
    if (var579 <= 0) return 1;
    return 41;
}

int func489(int var582) {
    if (var582 <= 0) return 1;
    return 35;
}

int func847(int var795) {
    if (var795 <= 0) return 1;
    return func847(var795 - 1);
}

int func381(int var172) {
    if (var172 <= 0) return 1;
    return 31;
}


int main() {
    for (int var928 = 0; var928 < 11; var928++) {
        var928 += 1;
    }    for (int var782 = 0; var782 < 8; var782++) {
        var782 += 3;
    }    for (int var858 = 0; var858 < 17; var858++) {
        var858 += 2;
    }

    int var269 = 9;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    int var602 = 27;
    if (var602 % 2 == 0) {
        printf("var602 is even\n");
    } else {
        printf("var602 is odd\n");
    }

    int var19 = 79;
    if (var19 % 2 == 0) {
        printf("var19 is even\n");
    } else {
        printf("var19 is odd\n");
    }

    return 0;
}
