
#include <stdio.h>


int func483(int var306) {
    if (var306 <= 0) return 1;
    return func483(var306 - 1);
}

int func888(int var282) {
    if (var282 <= 0) return 1;
    return 57;
}

int func959(int var656) {
    if (var656 <= 0) return 1;
    return 13;
}

int func161(int var145) {
    if (var145 <= 0) return 1;
    return func161(var145 - 1);
}


int main() {
    int var304 = 0;
    while (var304 < 10) {
        var304 += 5;
        var304++;
    }

    int var947 = 71;
    if (var947 % 2 == 0) {
        printf("var947 is even\n");
    } else {
        printf("var947 is odd\n");
    }

    int var394 = 38;
    if (var394 % 2 == 0) {
        printf("var394 is even\n");
    } else {
        printf("var394 is odd\n");
    }

    int var195 = 74;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    return 0;
}
