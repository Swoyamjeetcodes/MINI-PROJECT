
#include <stdio.h>


int func949(int var17) {
    if (var17 <= 0) return 1;
    return func949(var17 - 1);
}


int main() {
    int var880 = 0;
    while (var880 < 19) {
        var880 += 2;
        var880++;
    }

    int var30 = 53;
    if (var30 % 2 == 0) {
        printf("var30 is even\n");
    } else {
        printf("var30 is odd\n");
    }

    return 0;
}
