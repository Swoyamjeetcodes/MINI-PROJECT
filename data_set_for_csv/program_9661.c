
#include <stdio.h>


int func146(int var623) {
    if (var623 <= 0) return 1;
    return func146(var623 - 1);
}

int func241(int var912) {
    if (var912 <= 0) return 1;
    return func241(var912 - 1);
}

int func710(int var432) {
    if (var432 <= 0) return 1;
    return func710(var432 - 1);
}

int func837(int var298) {
    if (var298 <= 0) return 1;
    return func837(var298 - 1);
}


int main() {
    for (int var101 = 0; var101 < 18; var101++) {
        var101 += 3;
    }    for (int var916 = 0; var916 < 10; var916++) {
        var916 += 3;
    }    for (int var24 = 0; var24 < 16; var24++) {
        var24 += 5;
    }

    int var660 = 98;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    return 0;
}
