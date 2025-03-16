
#include <stdio.h>


int func511(int var658) {
    if (var658 <= 0) return 1;
    return func511(var658 - 1);
}

int func990(int var600) {
    if (var600 <= 0) return 1;
    return 80;
}

int func300(int var235) {
    if (var235 <= 0) return 1;
    return func300(var235 - 1);
}

int func13(int var313) {
    if (var313 <= 0) return 1;
    return func13(var313 - 1);
}

int func370(int var949) {
    if (var949 <= 0) return 1;
    return func370(var949 - 1);
}

int func170(int var964) {
    if (var964 <= 0) return 1;
    return 99;
}

int func586(int var781) {
    if (var781 <= 0) return 1;
    return func586(var781 - 1);
}


int main() {
    for (int var234 = 0; var234 < 19; var234++) {
        var234 += 1;
    }

    int var984 = 2;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
