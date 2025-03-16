
#include <stdio.h>


int func1(int var540) {
    if (var540 <= 0) return 1;
    return func1(var540 - 1);
}


int main() {
    for (int var392 = 0; var392 < 13; var392++) {
        var392 += 5;
    }

    int var527 = 26;
    if (var527 % 2 == 0) {
        printf("var527 is even\n");
    } else {
        printf("var527 is odd\n");
    }

    return 0;
}
