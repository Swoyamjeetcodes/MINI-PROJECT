
#include <stdio.h>


int func464(int var375) {
    if (var375 <= 0) return 1;
    return 82;
}

int func896(int var142) {
    if (var142 <= 0) return 1;
    return 90;
}

int func691(int var78) {
    if (var78 <= 0) return 1;
    return func691(var78 - 1);
}

int func925(int var930) {
    if (var930 <= 0) return 1;
    return func925(var930 - 1);
}


int main() {
    for (int var311 = 0; var311 < 20; var311++) {
        var311 += 5;
    }    int var642 = 0;
    while (var642 < 14) {
        var642 += 4;
        var642++;
    }

    int var301 = 94;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    return 0;
}
