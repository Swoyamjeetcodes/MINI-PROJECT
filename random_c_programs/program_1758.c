
#include <stdio.h>


int func709(int var918) {
    if (var918 <= 0) return 1;
    return 63;
}

int func464(int var732) {
    if (var732 <= 0) return 1;
    return func464(var732 - 1);
}


int main() {
    int var227 = 0;
    while (var227 < 15) {
        var227 += 1;
        var227++;
    }    int var841 = 0;
    while (var841 < 6) {
        var841 += 1;
        var841++;
    }

    int var311 = 64;
    if (var311 % 2 == 0) {
        printf("var311 is even\n");
    } else {
        printf("var311 is odd\n");
    }

    int var29 = 40;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
