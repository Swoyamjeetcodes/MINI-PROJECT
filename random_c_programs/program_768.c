
#include <stdio.h>


int func392(int var350) {
    if (var350 <= 0) return 1;
    return func392(var350 - 1);
}

int func499(int var197) {
    if (var197 <= 0) return 1;
    return func499(var197 - 1);
}

int func556(int var271) {
    if (var271 <= 0) return 1;
    return func556(var271 - 1);
}

int func434(int var177) {
    if (var177 <= 0) return 1;
    return func434(var177 - 1);
}


int main() {
    int var968 = 0;
    while (var968 < 20) {
        var968 += 2;
        var968++;
    }

    int var427 = 22;
    if (var427 % 2 == 0) {
        printf("var427 is even\n");
    } else {
        printf("var427 is odd\n");
    }

    int var722 = 51;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    int var182 = 40;
    if (var182 % 2 == 0) {
        printf("var182 is even\n");
    } else {
        printf("var182 is odd\n");
    }

    return 0;
}
