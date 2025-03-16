
#include <stdio.h>


int func823(int var577) {
    if (var577 <= 0) return 1;
    return func823(var577 - 1);
}


int main() {
    int var68 = 0;
    while (var68 < 16) {
        var68 += 1;
        var68++;
    }

    int var414 = 21;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
