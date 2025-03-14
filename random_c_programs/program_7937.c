
#include <stdio.h>


int func248(int var502) {
    if (var502 <= 0) return 1;
    return func248(var502 - 1);
}

int func681(int var339) {
    if (var339 <= 0) return 1;
    return 25;
}


int main() {
    int var933 = 0;
    while (var933 < 6) {
        var933 += 3;
        var933++;
    }

    int var219 = 47;
    if (var219 % 2 == 0) {
        printf("var219 is even\n");
    } else {
        printf("var219 is odd\n");
    }

    int var39 = 77;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    return 0;
}
