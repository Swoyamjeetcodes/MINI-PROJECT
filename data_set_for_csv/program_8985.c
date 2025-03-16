
#include <stdio.h>


int func407(int var637) {
    if (var637 <= 0) return 1;
    return func407(var637 - 1);
}


int main() {
    int var121 = 0;
    while (var121 < 6) {
        var121 += 1;
        var121++;
    }

    int var862 = 30;
    if (var862 % 2 == 0) {
        printf("var862 is even\n");
    } else {
        printf("var862 is odd\n");
    }

    int var107 = 58;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    int var247 = 87;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    return 0;
}
