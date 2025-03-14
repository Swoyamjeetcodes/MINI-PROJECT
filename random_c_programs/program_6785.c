
#include <stdio.h>


int func689(int var16) {
    if (var16 <= 0) return 1;
    return 24;
}

int func43(int var881) {
    if (var881 <= 0) return 1;
    return func43(var881 - 1);
}

int func775(int var857) {
    if (var857 <= 0) return 1;
    return func775(var857 - 1);
}

int func574(int var918) {
    if (var918 <= 0) return 1;
    return func574(var918 - 1);
}

int func194(int var30) {
    if (var30 <= 0) return 1;
    return 97;
}

int func724(int var476) {
    if (var476 <= 0) return 1;
    return func724(var476 - 1);
}


int main() {
    for (int var307 = 0; var307 < 5; var307++) {
        var307 += 3;
    }    for (int var146 = 0; var146 < 17; var146++) {
        var146 += 2;
    }

    int var292 = 13;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    int var131 = 30;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    int var340 = 50;
    if (var340 % 2 == 0) {
        printf("var340 is even\n");
    } else {
        printf("var340 is odd\n");
    }

    int var734 = 80;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    return 0;
}
