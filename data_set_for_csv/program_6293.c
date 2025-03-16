
#include <stdio.h>


int func892(int var162) {
    if (var162 <= 0) return 1;
    return func892(var162 - 1);
}


int main() {
    int var470 = 0;
    while (var470 < 10) {
        var470 += 2;
        var470++;
    }

    int var303 = 34;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    return 0;
}
