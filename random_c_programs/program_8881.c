
#include <stdio.h>


int func927(int var648) {
    if (var648 <= 0) return 1;
    return func927(var648 - 1);
}


int main() {
    for (int var932 = 0; var932 < 5; var932++) {
        var932 += 3;
    }    int var996 = 0;
    while (var996 < 5) {
        var996 += 4;
        var996++;
    }

    int var802 = 13;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    return 0;
}
