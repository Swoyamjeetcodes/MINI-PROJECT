
#include <stdio.h>


int func586(int var279) {
    if (var279 <= 0) return 1;
    return func586(var279 - 1);
}

int func306(int var656) {
    if (var656 <= 0) return 1;
    return 33;
}


int main() {
    for (int var665 = 0; var665 < 11; var665++) {
        var665 += 3;
    }

    int var59 = 33;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    int var434 = 40;
    if (var434 % 2 == 0) {
        printf("var434 is even\n");
    } else {
        printf("var434 is odd\n");
    }

    int var930 = 34;
    if (var930 % 2 == 0) {
        printf("var930 is even\n");
    } else {
        printf("var930 is odd\n");
    }

    return 0;
}
