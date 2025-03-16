
#include <stdio.h>


int func685(int var654) {
    if (var654 <= 0) return 1;
    return func685(var654 - 1);
}


int main() {
    for (int var45 = 0; var45 < 11; var45++) {
        var45 += 3;
    }

    int var640 = 6;
    if (var640 % 2 == 0) {
        printf("var640 is even\n");
    } else {
        printf("var640 is odd\n");
    }

    return 0;
}
