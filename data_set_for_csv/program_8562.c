
#include <stdio.h>


int func966(int var390) {
    if (var390 <= 0) return 1;
    return func966(var390 - 1);
}

int func981(int var53) {
    if (var53 <= 0) return 1;
    return 25;
}


int main() {
    int var706 = 0;
    while (var706 < 15) {
        var706 += 3;
        var706++;
    }    int var897 = 0;
    while (var897 < 13) {
        var897 += 4;
        var897++;
    }

    int var602 = 29;
    if (var602 % 2 == 0) {
        printf("var602 is even\n");
    } else {
        printf("var602 is odd\n");
    }

    return 0;
}
