
#include <stdio.h>


int func257(int var378) {
    if (var378 <= 0) return 1;
    return func257(var378 - 1);
}


int main() {
    for (int var767 = 0; var767 < 19; var767++) {
        var767 += 5;
    }

    int var882 = 9;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
