
#include <stdio.h>


int func876(int var532) {
    if (var532 <= 0) return 1;
    return func876(var532 - 1);
}


int main() {
    for (int var806 = 0; var806 < 6; var806++) {
        var806 += 4;
    }

    int var96 = 42;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    return 0;
}
