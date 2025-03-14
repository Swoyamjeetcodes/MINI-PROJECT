
#include <stdio.h>


int func309(int var614) {
    if (var614 <= 0) return 1;
    return func309(var614 - 1);
}

int func317(int var361) {
    if (var361 <= 0) return 1;
    return func317(var361 - 1);
}

int func13(int var460) {
    if (var460 <= 0) return 1;
    return 94;
}

int func955(int var704) {
    if (var704 <= 0) return 1;
    return 55;
}


int main() {
    int var240 = 0;
    while (var240 < 19) {
        var240 += 3;
        var240++;
    }    for (int var42 = 0; var42 < 12; var42++) {
        var42 += 4;
    }    int var151 = 0;
    while (var151 < 5) {
        var151 += 5;
        var151++;
    }

    int var916 = 10;
    if (var916 % 2 == 0) {
        printf("var916 is even\n");
    } else {
        printf("var916 is odd\n");
    }

    int var63 = 76;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    int var415 = 87;
    if (var415 % 2 == 0) {
        printf("var415 is even\n");
    } else {
        printf("var415 is odd\n");
    }

    return 0;
}
