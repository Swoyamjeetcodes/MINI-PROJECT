
#include <stdio.h>


int func431(int var568) {
    if (var568 <= 0) return 1;
    return func431(var568 - 1);
}

int func612(int var409) {
    if (var409 <= 0) return 1;
    return 47;
}

int func84(int var461) {
    if (var461 <= 0) return 1;
    return func84(var461 - 1);
}

int func452(int var907) {
    if (var907 <= 0) return 1;
    return func452(var907 - 1);
}


int main() {
    int var978 = 0;
    while (var978 < 19) {
        var978 += 5;
        var978++;
    }    int var414 = 0;
    while (var414 < 10) {
        var414 += 2;
        var414++;
    }    int var363 = 0;
    while (var363 < 6) {
        var363 += 4;
        var363++;
    }

    int var722 = 58;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    int var214 = 10;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    return 0;
}
