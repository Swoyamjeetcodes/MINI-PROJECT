
#include <stdio.h>


int func856(int var527) {
    if (var527 <= 0) return 1;
    return func856(var527 - 1);
}


int main() {
    for (int var98 = 0; var98 < 14; var98++) {
        var98 += 3;
    }

    int var423 = 34;
    if (var423 % 2 == 0) {
        printf("var423 is even\n");
    } else {
        printf("var423 is odd\n");
    }

    return 0;
}
