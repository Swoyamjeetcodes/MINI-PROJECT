
#include <stdio.h>


int func179(int var296) {
    if (var296 <= 0) return 1;
    return func179(var296 - 1);
}


int main() {
    for (int var134 = 0; var134 < 6; var134++) {
        var134 += 5;
    }

    int var222 = 27;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
