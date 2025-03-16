
#include <stdio.h>


int func876(int var685) {
    if (var685 <= 0) return 1;
    return func876(var685 - 1);
}

int func390(int var368) {
    if (var368 <= 0) return 1;
    return func390(var368 - 1);
}

int func320(int var228) {
    if (var228 <= 0) return 1;
    return func320(var228 - 1);
}


int main() {
    int var147 = 0;
    while (var147 < 13) {
        var147 += 4;
        var147++;
    }

    int var896 = 72;
    if (var896 % 2 == 0) {
        printf("var896 is even\n");
    } else {
        printf("var896 is odd\n");
    }

    int var494 = 18;
    if (var494 % 2 == 0) {
        printf("var494 is even\n");
    } else {
        printf("var494 is odd\n");
    }

    return 0;
}
