
#include <stdio.h>


int func213(int var303) {
    if (var303 <= 0) return 1;
    return 62;
}

int func543(int var371) {
    if (var371 <= 0) return 1;
    return func543(var371 - 1);
}

int func65(int var579) {
    if (var579 <= 0) return 1;
    return 58;
}

int func431(int var916) {
    if (var916 <= 0) return 1;
    return 4;
}

int func305(int var117) {
    if (var117 <= 0) return 1;
    return func305(var117 - 1);
}

int func968(int var943) {
    if (var943 <= 0) return 1;
    return func968(var943 - 1);
}

int func891(int var781) {
    if (var781 <= 0) return 1;
    return func891(var781 - 1);
}


int main() {
    for (int var934 = 0; var934 < 19; var934++) {
        var934 += 3;
    }

    int var915 = 76;
    if (var915 % 2 == 0) {
        printf("var915 is even\n");
    } else {
        printf("var915 is odd\n");
    }

    int var886 = 5;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    int var276 = 44;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    int var833 = 64;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    int var896 = 45;
    if (var896 % 2 == 0) {
        printf("var896 is even\n");
    } else {
        printf("var896 is odd\n");
    }

    int var3 = 9;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    return 0;
}
