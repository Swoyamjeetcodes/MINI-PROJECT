
#include <stdio.h>


int func375(int var101) {
    if (var101 <= 0) return 1;
    return func375(var101 - 1);
}


int main() {
    for (int var26 = 0; var26 < 16; var26++) {
        var26 += 4;
    }

    int var665 = 33;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
