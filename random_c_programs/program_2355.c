
#include <stdio.h>


int func838(int var725) {
    if (var725 <= 0) return 1;
    return func838(var725 - 1);
}

int func440(int var1000) {
    if (var1000 <= 0) return 1;
    return func440(var1000 - 1);
}

int func621(int var449) {
    if (var449 <= 0) return 1;
    return func621(var449 - 1);
}

int func757(int var989) {
    if (var989 <= 0) return 1;
    return 15;
}

int func469(int var127) {
    if (var127 <= 0) return 1;
    return 5;
}

int func810(int var279) {
    if (var279 <= 0) return 1;
    return func810(var279 - 1);
}

int func51(int var452) {
    if (var452 <= 0) return 1;
    return 76;
}

int func147(int var879) {
    if (var879 <= 0) return 1;
    return func147(var879 - 1);
}


int main() {
    int var39 = 0;
    while (var39 < 6) {
        var39 += 4;
        var39++;
    }    for (int var560 = 0; var560 < 5; var560++) {
        var560 += 5;
    }    int var220 = 0;
    while (var220 < 5) {
        var220 += 2;
        var220++;
    }

    int var236 = 22;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    return 0;
}
