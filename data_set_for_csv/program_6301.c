
#include <stdio.h>


int func130(int var435) {
    if (var435 <= 0) return 1;
    return func130(var435 - 1);
}

int func228(int var924) {
    if (var924 <= 0) return 1;
    return 8;
}

int func621(int var62) {
    if (var62 <= 0) return 1;
    return 100;
}

int func503(int var579) {
    if (var579 <= 0) return 1;
    return func503(var579 - 1);
}


int main() {
    for (int var216 = 0; var216 < 18; var216++) {
        var216 += 5;
    }    int var419 = 0;
    while (var419 < 19) {
        var419 += 3;
        var419++;
    }    for (int var431 = 0; var431 < 13; var431++) {
        var431 += 5;
    }

    int var786 = 9;
    if (var786 % 2 == 0) {
        printf("var786 is even\n");
    } else {
        printf("var786 is odd\n");
    }

    return 0;
}
