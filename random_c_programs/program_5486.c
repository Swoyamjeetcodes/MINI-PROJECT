
#include <stdio.h>


int func993(int var587) {
    if (var587 <= 0) return 1;
    return 31;
}

int func107(int var212) {
    if (var212 <= 0) return 1;
    return 60;
}

int func89(int var414) {
    if (var414 <= 0) return 1;
    return func89(var414 - 1);
}

int func400(int var16) {
    if (var16 <= 0) return 1;
    return 71;
}


int main() {
    int var446 = 0;
    while (var446 < 20) {
        var446 += 5;
        var446++;
    }    for (int var335 = 0; var335 < 15; var335++) {
        var335 += 3;
    }

    int var530 = 25;
    if (var530 % 2 == 0) {
        printf("var530 is even\n");
    } else {
        printf("var530 is odd\n");
    }

    return 0;
}
