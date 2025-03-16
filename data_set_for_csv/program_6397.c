
#include <stdio.h>


int func300(int var588) {
    if (var588 <= 0) return 1;
    return 49;
}

int func942(int var12) {
    if (var12 <= 0) return 1;
    return func942(var12 - 1);
}


int main() {
    int var671 = 0;
    while (var671 < 6) {
        var671 += 2;
        var671++;
    }    int var37 = 0;
    while (var37 < 10) {
        var37 += 2;
        var37++;
    }    int var195 = 0;
    while (var195 < 6) {
        var195 += 3;
        var195++;
    }

    int var365 = 72;
    if (var365 % 2 == 0) {
        printf("var365 is even\n");
    } else {
        printf("var365 is odd\n");
    }

    return 0;
}
