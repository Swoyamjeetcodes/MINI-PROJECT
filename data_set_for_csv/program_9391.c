
#include <stdio.h>


int func795(int var798) {
    if (var798 <= 0) return 1;
    return 63;
}

int func137(int var121) {
    if (var121 <= 0) return 1;
    return func137(var121 - 1);
}

int func382(int var310) {
    if (var310 <= 0) return 1;
    return func382(var310 - 1);
}

int func370(int var147) {
    if (var147 <= 0) return 1;
    return func370(var147 - 1);
}


int main() {
    for (int var482 = 0; var482 < 9; var482++) {
        var482 += 4;
    }    for (int var470 = 0; var470 < 20; var470++) {
        var470 += 4;
    }

    int var985 = 99;
    if (var985 % 2 == 0) {
        printf("var985 is even\n");
    } else {
        printf("var985 is odd\n");
    }

    int var249 = 48;
    if (var249 % 2 == 0) {
        printf("var249 is even\n");
    } else {
        printf("var249 is odd\n");
    }

    return 0;
}
