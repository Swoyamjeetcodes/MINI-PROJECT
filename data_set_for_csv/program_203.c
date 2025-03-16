
#include <stdio.h>


int func440(int var47) {
    if (var47 <= 0) return 1;
    return func440(var47 - 1);
}


int main() {
    int var363 = 0;
    while (var363 < 5) {
        var363 += 4;
        var363++;
    }

    int var570 = 66;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
