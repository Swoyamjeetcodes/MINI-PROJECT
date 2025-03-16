
#include <stdio.h>


int func552(int var538) {
    if (var538 <= 0) return 1;
    return func552(var538 - 1);
}

int func934(int var378) {
    if (var378 <= 0) return 1;
    return 80;
}

int func884(int var965) {
    if (var965 <= 0) return 1;
    return 68;
}

int func492(int var601) {
    if (var601 <= 0) return 1;
    return 30;
}

int func967(int var13) {
    if (var13 <= 0) return 1;
    return func967(var13 - 1);
}


int main() {
    for (int var209 = 0; var209 < 8; var209++) {
        var209 += 1;
    }

    int var284 = 11;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    int var520 = 42;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    return 0;
}
