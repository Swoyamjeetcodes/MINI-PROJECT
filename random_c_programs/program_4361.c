
#include <stdio.h>


int func527(int var109) {
    if (var109 <= 0) return 1;
    return func527(var109 - 1);
}


int main() {
    for (int var287 = 0; var287 < 9; var287++) {
        var287 += 5;
    }

    int var886 = 94;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
