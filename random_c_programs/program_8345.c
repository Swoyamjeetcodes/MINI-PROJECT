
#include <stdio.h>


int func909(int var697) {
    if (var697 <= 0) return 1;
    return func909(var697 - 1);
}


int main() {
    int var39 = 0;
    while (var39 < 11) {
        var39 += 2;
        var39++;
    }

    int var170 = 33;
    if (var170 % 2 == 0) {
        printf("var170 is even\n");
    } else {
        printf("var170 is odd\n");
    }

    return 0;
}
