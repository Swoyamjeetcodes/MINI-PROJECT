
#include <stdio.h>


int func277(int var34) {
    if (var34 <= 0) return 1;
    return 16;
}

int func167(int var541) {
    if (var541 <= 0) return 1;
    return func167(var541 - 1);
}

int func534(int var513) {
    if (var513 <= 0) return 1;
    return func534(var513 - 1);
}

int func487(int var715) {
    if (var715 <= 0) return 1;
    return func487(var715 - 1);
}

int func536(int var194) {
    if (var194 <= 0) return 1;
    return func536(var194 - 1);
}


int main() {
    for (int var940 = 0; var940 < 15; var940++) {
        var940 += 3;
    }

    int var956 = 9;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
