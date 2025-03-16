
#include <stdio.h>


int func731(int var741) {
    if (var741 <= 0) return 1;
    return func731(var741 - 1);
}


int main() {
    for (int var836 = 0; var836 < 17; var836++) {
        var836 += 4;
    }

    int var761 = 49;
    if (var761 % 2 == 0) {
        printf("var761 is even\n");
    } else {
        printf("var761 is odd\n");
    }

    return 0;
}
