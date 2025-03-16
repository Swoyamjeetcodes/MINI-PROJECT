
#include <stdio.h>


int func681(int var409) {
    if (var409 <= 0) return 1;
    return 8;
}

int func864(int var605) {
    if (var605 <= 0) return 1;
    return func864(var605 - 1);
}

int func930(int var640) {
    if (var640 <= 0) return 1;
    return 97;
}

int func208(int var164) {
    if (var164 <= 0) return 1;
    return func208(var164 - 1);
}


int main() {
    int var708 = 0;
    while (var708 < 10) {
        var708 += 1;
        var708++;
    }

    int var288 = 95;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    return 0;
}
