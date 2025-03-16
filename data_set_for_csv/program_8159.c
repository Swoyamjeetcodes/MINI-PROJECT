
#include <stdio.h>


int func300(int var258) {
    if (var258 <= 0) return 1;
    return func300(var258 - 1);
}

int func290(int var780) {
    if (var780 <= 0) return 1;
    return func290(var780 - 1);
}

int func135(int var803) {
    if (var803 <= 0) return 1;
    return func135(var803 - 1);
}


int main() {
    for (int var178 = 0; var178 < 19; var178++) {
        var178 += 3;
    }    int var912 = 0;
    while (var912 < 11) {
        var912 += 2;
        var912++;
    }    int var955 = 0;
    while (var955 < 14) {
        var955 += 3;
        var955++;
    }

    int var716 = 21;
    if (var716 % 2 == 0) {
        printf("var716 is even\n");
    } else {
        printf("var716 is odd\n");
    }

    return 0;
}
