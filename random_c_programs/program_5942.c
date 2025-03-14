
#include <stdio.h>


int func999(int var986) {
    if (var986 <= 0) return 1;
    return func999(var986 - 1);
}


int main() {
    int var608 = 0;
    while (var608 < 16) {
        var608 += 4;
        var608++;
    }    int var678 = 0;
    while (var678 < 16) {
        var678 += 4;
        var678++;
    }    for (int var595 = 0; var595 < 12; var595++) {
        var595 += 1;
    }    int var775 = 0;
    while (var775 < 13) {
        var775 += 2;
        var775++;
    }

    int var550 = 64;
    if (var550 % 2 == 0) {
        printf("var550 is even\n");
    } else {
        printf("var550 is odd\n");
    }

    int var501 = 6;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    return 0;
}
