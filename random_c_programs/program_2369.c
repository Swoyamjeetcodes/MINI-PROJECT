
#include <stdio.h>


int func924(int var626) {
    if (var626 <= 0) return 1;
    return 8;
}

int func2(int var273) {
    if (var273 <= 0) return 1;
    return func2(var273 - 1);
}


int main() {
    int var441 = 0;
    while (var441 < 10) {
        var441 += 3;
        var441++;
    }    for (int var757 = 0; var757 < 15; var757++) {
        var757 += 5;
    }

    int var255 = 10;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    return 0;
}
