
#include <stdio.h>


int func166(int var267) {
    if (var267 <= 0) return 1;
    return 22;
}

int func69(int var838) {
    if (var838 <= 0) return 1;
    return 13;
}

int func859(int var568) {
    if (var568 <= 0) return 1;
    return 16;
}

int func262(int var710) {
    if (var710 <= 0) return 1;
    return func262(var710 - 1);
}


int main() {
    int var954 = 0;
    while (var954 < 12) {
        var954 += 4;
        var954++;
    }    int var264 = 0;
    while (var264 < 19) {
        var264 += 3;
        var264++;
    }

    int var921 = 27;
    if (var921 % 2 == 0) {
        printf("var921 is even\n");
    } else {
        printf("var921 is odd\n");
    }

    return 0;
}
