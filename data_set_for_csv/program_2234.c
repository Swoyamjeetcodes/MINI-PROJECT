
#include <stdio.h>


int func546(int var865) {
    if (var865 <= 0) return 1;
    return func546(var865 - 1);
}

int func312(int var55) {
    if (var55 <= 0) return 1;
    return func312(var55 - 1);
}

int func377(int var31) {
    if (var31 <= 0) return 1;
    return 6;
}

int func635(int var523) {
    if (var523 <= 0) return 1;
    return func635(var523 - 1);
}

int func929(int var616) {
    if (var616 <= 0) return 1;
    return func929(var616 - 1);
}


int main() {
    int var611 = 0;
    while (var611 < 13) {
        var611 += 2;
        var611++;
    }    for (int var309 = 0; var309 < 15; var309++) {
        var309 += 5;
    }

    int var394 = 61;
    if (var394 % 2 == 0) {
        printf("var394 is even\n");
    } else {
        printf("var394 is odd\n");
    }

    int var38 = 29;
    if (var38 % 2 == 0) {
        printf("var38 is even\n");
    } else {
        printf("var38 is odd\n");
    }

    int var862 = 25;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    return 0;
}
