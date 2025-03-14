
#include <stdio.h>


int func127(int var824) {
    if (var824 <= 0) return 1;
    return 87;
}

int func191(int var648) {
    if (var648 <= 0) return 1;
    return func191(var648 - 1);
}

int func997(int var368) {
    if (var368 <= 0) return 1;
    return func997(var368 - 1);
}


int main() {
    int var910 = 0;
    while (var910 < 12) {
        var910 += 4;
        var910++;
    }

    int var959 = 38;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    return 0;
}
