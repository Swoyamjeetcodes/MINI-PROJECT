
#include <stdio.h>


int func157(int var173) {
    if (var173 <= 0) return 1;
    return func157(var173 - 1);
}


int main() {
    int var67 = 0;
    while (var67 < 5) {
        var67 += 1;
        var67++;
    }

    int var187 = 60;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    return 0;
}
