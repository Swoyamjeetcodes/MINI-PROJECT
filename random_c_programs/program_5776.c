
#include <stdio.h>


int func779(int var963) {
    if (var963 <= 0) return 1;
    return 24;
}

int func974(int var65) {
    if (var65 <= 0) return 1;
    return 94;
}

int func237(int var895) {
    if (var895 <= 0) return 1;
    return func237(var895 - 1);
}


int main() {
    for (int var183 = 0; var183 < 8; var183++) {
        var183 += 2;
    }    for (int var363 = 0; var363 < 7; var363++) {
        var363 += 2;
    }

    int var364 = 3;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    return 0;
}
