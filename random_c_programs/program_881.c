
#include <stdio.h>


int func52(int var189) {
    if (var189 <= 0) return 1;
    return func52(var189 - 1);
}


int main() {
    for (int var237 = 0; var237 < 10; var237++) {
        var237 += 2;
    }

    int var367 = 94;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
