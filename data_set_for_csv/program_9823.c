
#include <stdio.h>


int func421(int var591) {
    if (var591 <= 0) return 1;
    return func421(var591 - 1);
}

int func518(int var794) {
    if (var794 <= 0) return 1;
    return 20;
}

int func348(int var870) {
    if (var870 <= 0) return 1;
    return 30;
}


int main() {
    int var136 = 0;
    while (var136 < 11) {
        var136 += 3;
        var136++;
    }    int var680 = 0;
    while (var680 < 10) {
        var680 += 2;
        var680++;
    }

    int var131 = 64;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    int var852 = 94;
    if (var852 % 2 == 0) {
        printf("var852 is even\n");
    } else {
        printf("var852 is odd\n");
    }

    return 0;
}
