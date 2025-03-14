
#include <stdio.h>


int func866(int var833) {
    if (var833 <= 0) return 1;
    return func866(var833 - 1);
}


int main() {
    int var640 = 0;
    while (var640 < 5) {
        var640 += 3;
        var640++;
    }

    int var762 = 3;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
