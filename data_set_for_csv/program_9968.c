
#include <stdio.h>


int func777(int var721) {
    if (var721 <= 0) return 1;
    return func777(var721 - 1);
}

int func56(int var68) {
    if (var68 <= 0) return 1;
    return 36;
}

int func16(int var140) {
    if (var140 <= 0) return 1;
    return func16(var140 - 1);
}


int main() {
    int var794 = 0;
    while (var794 < 5) {
        var794 += 2;
        var794++;
    }    for (int var16 = 0; var16 < 20; var16++) {
        var16 += 3;
    }

    int var937 = 68;
    if (var937 % 2 == 0) {
        printf("var937 is even\n");
    } else {
        printf("var937 is odd\n");
    }

    int var303 = 59;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    return 0;
}
