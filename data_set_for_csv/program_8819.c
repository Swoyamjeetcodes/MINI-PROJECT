
#include <stdio.h>


int func730(int var151) {
    if (var151 <= 0) return 1;
    return 75;
}

int func983(int var245) {
    if (var245 <= 0) return 1;
    return func983(var245 - 1);
}

int func309(int var622) {
    if (var622 <= 0) return 1;
    return 9;
}

int func461(int var228) {
    if (var228 <= 0) return 1;
    return func461(var228 - 1);
}

int func866(int var966) {
    if (var966 <= 0) return 1;
    return 34;
}


int main() {
    int var310 = 0;
    while (var310 < 6) {
        var310 += 2;
        var310++;
    }    int var369 = 0;
    while (var369 < 12) {
        var369 += 5;
        var369++;
    }    for (int var873 = 0; var873 < 7; var873++) {
        var873 += 1;
    }

    int var833 = 84;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
