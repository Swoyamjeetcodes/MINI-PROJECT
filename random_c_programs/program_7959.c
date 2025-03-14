
#include <stdio.h>


int func736(int var173) {
    if (var173 <= 0) return 1;
    return func736(var173 - 1);
}


int main() {
    for (int var447 = 0; var447 < 10; var447++) {
        var447 += 2;
    }

    int var960 = 32;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
