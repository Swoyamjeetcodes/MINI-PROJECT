
#include <stdio.h>


int func925(int var743) {
    if (var743 <= 0) return 1;
    return 22;
}

int func746(int var796) {
    if (var796 <= 0) return 1;
    return func746(var796 - 1);
}


int main() {
    int var982 = 0;
    while (var982 < 9) {
        var982 += 3;
        var982++;
    }    int var173 = 0;
    while (var173 < 6) {
        var173 += 1;
        var173++;
    }

    int var613 = 17;
    if (var613 % 2 == 0) {
        printf("var613 is even\n");
    } else {
        printf("var613 is odd\n");
    }

    int var117 = 4;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    int var622 = 73;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    return 0;
}
