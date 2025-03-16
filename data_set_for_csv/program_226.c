
#include <stdio.h>


int func336(int var544) {
    if (var544 <= 0) return 1;
    return 62;
}

int func542(int var913) {
    if (var913 <= 0) return 1;
    return func542(var913 - 1);
}

int func511(int var227) {
    if (var227 <= 0) return 1;
    return func511(var227 - 1);
}

int func941(int var719) {
    if (var719 <= 0) return 1;
    return func941(var719 - 1);
}

int func991(int var110) {
    if (var110 <= 0) return 1;
    return 5;
}


int main() {
    for (int var929 = 0; var929 < 19; var929++) {
        var929 += 5;
    }    for (int var652 = 0; var652 < 9; var652++) {
        var652 += 3;
    }    int var31 = 0;
    while (var31 < 6) {
        var31 += 2;
        var31++;
    }

    int var142 = 25;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    int var756 = 28;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    int var329 = 94;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    return 0;
}
