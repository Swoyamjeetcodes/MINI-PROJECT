
#include <stdio.h>


int func679(int var804) {
    if (var804 <= 0) return 1;
    return func679(var804 - 1);
}


int main() {
    for (int var984 = 0; var984 < 11; var984++) {
        var984 += 2;
    }

    int var971 = 96;
    if (var971 % 2 == 0) {
        printf("var971 is even\n");
    } else {
        printf("var971 is odd\n");
    }

    int var798 = 5;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    return 0;
}
