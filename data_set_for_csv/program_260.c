
#include <stdio.h>


int func530(int var920) {
    if (var920 <= 0) return 1;
    return func530(var920 - 1);
}


int main() {
    for (int var191 = 0; var191 < 16; var191++) {
        var191 += 5;
    }    int var520 = 0;
    while (var520 < 9) {
        var520 += 2;
        var520++;
    }

    int var951 = 25;
    if (var951 % 2 == 0) {
        printf("var951 is even\n");
    } else {
        printf("var951 is odd\n");
    }

    return 0;
}
