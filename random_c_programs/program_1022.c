
#include <stdio.h>


int func847(int var755) {
    if (var755 <= 0) return 1;
    return 89;
}

int func131(int var60) {
    if (var60 <= 0) return 1;
    return 87;
}

int func237(int var278) {
    if (var278 <= 0) return 1;
    return func237(var278 - 1);
}

int func453(int var923) {
    if (var923 <= 0) return 1;
    return func453(var923 - 1);
}


int main() {
    for (int var407 = 0; var407 < 18; var407++) {
        var407 += 5;
    }    for (int var436 = 0; var436 < 10; var436++) {
        var436 += 2;
    }    int var104 = 0;
    while (var104 < 18) {
        var104 += 3;
        var104++;
    }

    int var665 = 91;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
