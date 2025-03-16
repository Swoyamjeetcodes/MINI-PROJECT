
#include <stdio.h>


int func542(int var319) {
    if (var319 <= 0) return 1;
    return func542(var319 - 1);
}


int main() {
    for (int var651 = 0; var651 < 7; var651++) {
        var651 += 3;
    }

    int var853 = 74;
    if (var853 % 2 == 0) {
        printf("var853 is even\n");
    } else {
        printf("var853 is odd\n");
    }

    return 0;
}
