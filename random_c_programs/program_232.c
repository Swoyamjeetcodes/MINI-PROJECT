
#include <stdio.h>


int func660(int var800) {
    if (var800 <= 0) return 1;
    return func660(var800 - 1);
}

int func523(int var633) {
    if (var633 <= 0) return 1;
    return 58;
}

int func945(int var850) {
    if (var850 <= 0) return 1;
    return 33;
}


int main() {
    int var983 = 0;
    while (var983 < 17) {
        var983 += 5;
        var983++;
    }    int var163 = 0;
    while (var163 < 8) {
        var163 += 2;
        var163++;
    }

    int var59 = 21;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    int var835 = 11;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    return 0;
}
