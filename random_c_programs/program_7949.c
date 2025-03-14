
#include <stdio.h>


int func750(int var646) {
    if (var646 <= 0) return 1;
    return func750(var646 - 1);
}

int func99(int var406) {
    if (var406 <= 0) return 1;
    return func99(var406 - 1);
}


int main() {
    for (int var992 = 0; var992 < 8; var992++) {
        var992 += 4;
    }    for (int var572 = 0; var572 < 14; var572++) {
        var572 += 1;
    }    int var329 = 0;
    while (var329 < 9) {
        var329 += 2;
        var329++;
    }

    int var935 = 22;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    int var262 = 76;
    if (var262 % 2 == 0) {
        printf("var262 is even\n");
    } else {
        printf("var262 is odd\n");
    }

    int var534 = 90;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
