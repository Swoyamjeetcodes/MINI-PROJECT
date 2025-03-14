
#include <stdio.h>


int func488(int var858) {
    if (var858 <= 0) return 1;
    return func488(var858 - 1);
}

int func869(int var225) {
    if (var225 <= 0) return 1;
    return func869(var225 - 1);
}


int main() {
    int var350 = 0;
    while (var350 < 7) {
        var350 += 4;
        var350++;
    }    int var106 = 0;
    while (var106 < 13) {
        var106 += 1;
        var106++;
    }    for (int var145 = 0; var145 < 11; var145++) {
        var145 += 4;
    }

    int var799 = 44;
    if (var799 % 2 == 0) {
        printf("var799 is even\n");
    } else {
        printf("var799 is odd\n");
    }

    int var140 = 0;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var884 = 63;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    return 0;
}
