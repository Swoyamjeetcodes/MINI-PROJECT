
#include <stdio.h>


int func329(int var653) {
    if (var653 <= 0) return 1;
    return func329(var653 - 1);
}

int func362(int var995) {
    if (var995 <= 0) return 1;
    return func362(var995 - 1);
}


int main() {
    int var463 = 0;
    while (var463 < 13) {
        var463 += 4;
        var463++;
    }    int var386 = 0;
    while (var386 < 14) {
        var386 += 1;
        var386++;
    }

    int var284 = 80;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
