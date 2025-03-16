
#include <stdio.h>


int func634(int var567) {
    if (var567 <= 0) return 1;
    return func634(var567 - 1);
}


int main() {
    int var821 = 0;
    while (var821 < 8) {
        var821 += 1;
        var821++;
    }

    int var470 = 20;
    if (var470 % 2 == 0) {
        printf("var470 is even\n");
    } else {
        printf("var470 is odd\n");
    }

    return 0;
}
