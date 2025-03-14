
#include <stdio.h>


int func780(int var70) {
    if (var70 <= 0) return 1;
    return 16;
}

int func656(int var592) {
    if (var592 <= 0) return 1;
    return 76;
}

int func202(int var174) {
    if (var174 <= 0) return 1;
    return 75;
}

int func183(int var812) {
    if (var812 <= 0) return 1;
    return 13;
}

int func603(int var727) {
    if (var727 <= 0) return 1;
    return func603(var727 - 1);
}

int func791(int var818) {
    if (var818 <= 0) return 1;
    return func791(var818 - 1);
}

int func335(int var288) {
    if (var288 <= 0) return 1;
    return func335(var288 - 1);
}


int main() {
    for (int var212 = 0; var212 < 7; var212++) {
        var212 += 4;
    }    int var495 = 0;
    while (var495 < 16) {
        var495 += 2;
        var495++;
    }    for (int var159 = 0; var159 < 10; var159++) {
        var159 += 5;
    }

    int var111 = 1;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    return 0;
}
