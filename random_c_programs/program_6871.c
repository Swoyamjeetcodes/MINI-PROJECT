
#include <stdio.h>


int func779(int var173) {
    if (var173 <= 0) return 1;
    return func779(var173 - 1);
}

int func401(int var562) {
    if (var562 <= 0) return 1;
    return func401(var562 - 1);
}

int func552(int var237) {
    if (var237 <= 0) return 1;
    return 1;
}


int main() {
    for (int var458 = 0; var458 < 15; var458++) {
        var458 += 1;
    }    for (int var36 = 0; var36 < 20; var36++) {
        var36 += 2;
    }    for (int var881 = 0; var881 < 20; var881++) {
        var881 += 1;
    }

    int var432 = 66;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    int var253 = 5;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    int var394 = 60;
    if (var394 % 2 == 0) {
        printf("var394 is even\n");
    } else {
        printf("var394 is odd\n");
    }

    return 0;
}
