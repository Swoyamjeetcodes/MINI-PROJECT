
#include <stdio.h>


int func97(int var348) {
    if (var348 <= 0) return 1;
    return func97(var348 - 1);
}


int main() {
    for (int var592 = 0; var592 < 12; var592++) {
        var592 += 3;
    }

    int var219 = 1;
    if (var219 % 2 == 0) {
        printf("var219 is even\n");
    } else {
        printf("var219 is odd\n");
    }

    return 0;
}
