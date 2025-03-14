
#include <stdio.h>


int func239(int var341) {
    if (var341 <= 0) return 1;
    return 32;
}

int func472(int var691) {
    if (var691 <= 0) return 1;
    return func472(var691 - 1);
}

int func920(int var708) {
    if (var708 <= 0) return 1;
    return 14;
}


int main() {
    int var78 = 0;
    while (var78 < 19) {
        var78 += 3;
        var78++;
    }    for (int var109 = 0; var109 < 11; var109++) {
        var109 += 4;
    }    for (int var203 = 0; var203 < 5; var203++) {
        var203 += 4;
    }

    int var397 = 62;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
