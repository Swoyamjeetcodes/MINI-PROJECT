
#include <stdio.h>


int func195(int var409) {
    if (var409 <= 0) return 1;
    return 75;
}

int func907(int var400) {
    if (var400 <= 0) return 1;
    return func907(var400 - 1);
}


int main() {
    for (int var482 = 0; var482 < 10; var482++) {
        var482 += 2;
    }

    int var406 = 88;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    int var288 = 28;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    int var170 = 5;
    if (var170 % 2 == 0) {
        printf("var170 is even\n");
    } else {
        printf("var170 is odd\n");
    }

    return 0;
}
