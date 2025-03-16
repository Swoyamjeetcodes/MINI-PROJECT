
#include <stdio.h>


int func940(int var198) {
    if (var198 <= 0) return 1;
    return 39;
}

int func919(int var615) {
    if (var615 <= 0) return 1;
    return func919(var615 - 1);
}


int main() {
    int var353 = 0;
    while (var353 < 20) {
        var353 += 3;
        var353++;
    }    int var902 = 0;
    while (var902 < 10) {
        var902 += 4;
        var902++;
    }    for (int var635 = 0; var635 < 14; var635++) {
        var635 += 4;
    }

    int var892 = 44;
    if (var892 % 2 == 0) {
        printf("var892 is even\n");
    } else {
        printf("var892 is odd\n");
    }

    int var330 = 83;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    return 0;
}
