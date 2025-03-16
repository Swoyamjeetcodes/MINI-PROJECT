
#include <stdio.h>


int func709(int var92) {
    if (var92 <= 0) return 1;
    return func709(var92 - 1);
}

int func380(int var610) {
    if (var610 <= 0) return 1;
    return func380(var610 - 1);
}

int func722(int var921) {
    if (var921 <= 0) return 1;
    return func722(var921 - 1);
}

int func262(int var819) {
    if (var819 <= 0) return 1;
    return 33;
}

int func155(int var199) {
    if (var199 <= 0) return 1;
    return 89;
}

int func448(int var899) {
    if (var899 <= 0) return 1;
    return 2;
}


int main() {
    for (int var262 = 0; var262 < 11; var262++) {
        var262 += 1;
    }

    int var157 = 35;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    int var596 = 60;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    int var426 = 2;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
