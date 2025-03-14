
#include <stdio.h>


int func374(int var900) {
    if (var900 <= 0) return 1;
    return func374(var900 - 1);
}


int main() {
    for (int var962 = 0; var962 < 15; var962++) {
        var962 += 3;
    }    for (int var931 = 0; var931 < 17; var931++) {
        var931 += 5;
    }

    int var305 = 60;
    if (var305 % 2 == 0) {
        printf("var305 is even\n");
    } else {
        printf("var305 is odd\n");
    }

    int var457 = 45;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    return 0;
}
