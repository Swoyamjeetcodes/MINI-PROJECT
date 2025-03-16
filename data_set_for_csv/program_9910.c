
#include <stdio.h>


int func808(int var199) {
    if (var199 <= 0) return 1;
    return 40;
}

int func913(int var152) {
    if (var152 <= 0) return 1;
    return func913(var152 - 1);
}

int func382(int var240) {
    if (var240 <= 0) return 1;
    return func382(var240 - 1);
}

int func786(int var286) {
    if (var286 <= 0) return 1;
    return 5;
}

int func968(int var410) {
    if (var410 <= 0) return 1;
    return func968(var410 - 1);
}


int main() {
    int var275 = 0;
    while (var275 < 15) {
        var275 += 4;
        var275++;
    }    int var697 = 0;
    while (var697 < 19) {
        var697 += 5;
        var697++;
    }

    int var857 = 100;
    if (var857 % 2 == 0) {
        printf("var857 is even\n");
    } else {
        printf("var857 is odd\n");
    }

    int var770 = 75;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    int var593 = 79;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    return 0;
}
