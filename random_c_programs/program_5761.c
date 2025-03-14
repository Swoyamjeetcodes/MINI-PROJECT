
#include <stdio.h>


int func334(int var155) {
    if (var155 <= 0) return 1;
    return 100;
}

int func579(int var252) {
    if (var252 <= 0) return 1;
    return 3;
}

int func443(int var879) {
    if (var879 <= 0) return 1;
    return 15;
}

int func195(int var395) {
    if (var395 <= 0) return 1;
    return func195(var395 - 1);
}

int func545(int var846) {
    if (var846 <= 0) return 1;
    return 81;
}


int main() {
    int var639 = 0;
    while (var639 < 17) {
        var639 += 4;
        var639++;
    }    for (int var572 = 0; var572 < 14; var572++) {
        var572 += 4;
    }

    int var385 = 7;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    int var446 = 14;
    if (var446 % 2 == 0) {
        printf("var446 is even\n");
    } else {
        printf("var446 is odd\n");
    }

    return 0;
}
