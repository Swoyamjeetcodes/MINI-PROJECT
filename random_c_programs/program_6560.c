
#include <stdio.h>


int func204(int var601) {
    if (var601 <= 0) return 1;
    return func204(var601 - 1);
}

int func734(int var770) {
    if (var770 <= 0) return 1;
    return func734(var770 - 1);
}

int func300(int var139) {
    if (var139 <= 0) return 1;
    return 99;
}

int func950(int var968) {
    if (var968 <= 0) return 1;
    return 2;
}

int func251(int var980) {
    if (var980 <= 0) return 1;
    return 100;
}

int func12(int var295) {
    if (var295 <= 0) return 1;
    return func12(var295 - 1);
}


int main() {
    for (int var483 = 0; var483 < 7; var483++) {
        var483 += 4;
    }    int var600 = 0;
    while (var600 < 17) {
        var600 += 3;
        var600++;
    }    int var186 = 0;
    while (var186 < 5) {
        var186 += 2;
        var186++;
    }    for (int var884 = 0; var884 < 13; var884++) {
        var884 += 3;
    }    int var5 = 0;
    while (var5 < 5) {
        var5 += 1;
        var5++;
    }    for (int var357 = 0; var357 < 12; var357++) {
        var357 += 5;
    }

    int var447 = 76;
    if (var447 % 2 == 0) {
        printf("var447 is even\n");
    } else {
        printf("var447 is odd\n");
    }

    int var333 = 58;
    if (var333 % 2 == 0) {
        printf("var333 is even\n");
    } else {
        printf("var333 is odd\n");
    }

    return 0;
}
