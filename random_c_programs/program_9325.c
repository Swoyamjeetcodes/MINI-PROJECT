
#include <stdio.h>


int func344(int var358) {
    if (var358 <= 0) return 1;
    return func344(var358 - 1);
}

int func849(int var578) {
    if (var578 <= 0) return 1;
    return 9;
}

int func450(int var982) {
    if (var982 <= 0) return 1;
    return 57;
}

int func46(int var810) {
    if (var810 <= 0) return 1;
    return 19;
}

int func121(int var14) {
    if (var14 <= 0) return 1;
    return func121(var14 - 1);
}


int main() {
    for (int var239 = 0; var239 < 7; var239++) {
        var239 += 4;
    }    for (int var905 = 0; var905 < 5; var905++) {
        var905 += 5;
    }

    int var858 = 18;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    int var463 = 91;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    int var889 = 77;
    if (var889 % 2 == 0) {
        printf("var889 is even\n");
    } else {
        printf("var889 is odd\n");
    }

    return 0;
}
