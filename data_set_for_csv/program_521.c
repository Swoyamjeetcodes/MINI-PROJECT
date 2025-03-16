
#include <stdio.h>


int func835(int var796) {
    if (var796 <= 0) return 1;
    return 73;
}

int func972(int var478) {
    if (var478 <= 0) return 1;
    return func972(var478 - 1);
}


int main() {
    int var575 = 0;
    while (var575 < 7) {
        var575 += 1;
        var575++;
    }

    int var210 = 2;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    int var957 = 21;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    int var692 = 94;
    if (var692 % 2 == 0) {
        printf("var692 is even\n");
    } else {
        printf("var692 is odd\n");
    }

    return 0;
}
