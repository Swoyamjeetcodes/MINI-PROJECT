
#include <stdio.h>


int func775(int var933) {
    if (var933 <= 0) return 1;
    return 39;
}

int func866(int var171) {
    if (var171 <= 0) return 1;
    return func866(var171 - 1);
}

int func965(int var463) {
    if (var463 <= 0) return 1;
    return func965(var463 - 1);
}

int func322(int var999) {
    if (var999 <= 0) return 1;
    return 4;
}

int func55(int var502) {
    if (var502 <= 0) return 1;
    return func55(var502 - 1);
}


int main() {
    int var691 = 0;
    while (var691 < 14) {
        var691 += 3;
        var691++;
    }    for (int var313 = 0; var313 < 5; var313++) {
        var313 += 3;
    }    int var118 = 0;
    while (var118 < 17) {
        var118 += 3;
        var118++;
    }

    int var574 = 14;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    return 0;
}
