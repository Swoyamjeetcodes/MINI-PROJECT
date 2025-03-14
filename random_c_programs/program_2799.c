
#include <stdio.h>


int func455(int var50) {
    if (var50 <= 0) return 1;
    return 93;
}

int func223(int var771) {
    if (var771 <= 0) return 1;
    return func223(var771 - 1);
}

int func677(int var349) {
    if (var349 <= 0) return 1;
    return 65;
}

int func178(int var752) {
    if (var752 <= 0) return 1;
    return func178(var752 - 1);
}

int func906(int var26) {
    if (var26 <= 0) return 1;
    return func906(var26 - 1);
}


int main() {
    for (int var984 = 0; var984 < 15; var984++) {
        var984 += 1;
    }    int var883 = 0;
    while (var883 < 19) {
        var883 += 2;
        var883++;
    }

    int var816 = 93;
    if (var816 % 2 == 0) {
        printf("var816 is even\n");
    } else {
        printf("var816 is odd\n");
    }

    int var946 = 54;
    if (var946 % 2 == 0) {
        printf("var946 is even\n");
    } else {
        printf("var946 is odd\n");
    }

    int var200 = 10;
    if (var200 % 2 == 0) {
        printf("var200 is even\n");
    } else {
        printf("var200 is odd\n");
    }

    return 0;
}
