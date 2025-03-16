
#include <stdio.h>


int func329(int var885) {
    if (var885 <= 0) return 1;
    return func329(var885 - 1);
}


int main() {
    for (int var932 = 0; var932 < 16; var932++) {
        var932 += 5;
    }

    int var316 = 4;
    if (var316 % 2 == 0) {
        printf("var316 is even\n");
    } else {
        printf("var316 is odd\n");
    }

    int var580 = 36;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    int var584 = 18;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    return 0;
}
