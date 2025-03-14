
#include <stdio.h>


int func284(int var805) {
    if (var805 <= 0) return 1;
    return func284(var805 - 1);
}

int func166(int var214) {
    if (var214 <= 0) return 1;
    return 4;
}

int func174(int var845) {
    if (var845 <= 0) return 1;
    return func174(var845 - 1);
}

int func909(int var9) {
    if (var9 <= 0) return 1;
    return 38;
}


int main() {
    for (int var864 = 0; var864 < 7; var864++) {
        var864 += 5;
    }    for (int var313 = 0; var313 < 7; var313++) {
        var313 += 4;
    }    int var541 = 0;
    while (var541 < 16) {
        var541 += 2;
        var541++;
    }    int var922 = 0;
    while (var922 < 13) {
        var922 += 5;
        var922++;
    }    for (int var835 = 0; var835 < 12; var835++) {
        var835 += 5;
    }

    int var755 = 23;
    if (var755 % 2 == 0) {
        printf("var755 is even\n");
    } else {
        printf("var755 is odd\n");
    }

    int var487 = 23;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    int var798 = 65;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
