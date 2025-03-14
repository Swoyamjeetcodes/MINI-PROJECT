
#include <stdio.h>


int func93(int var741) {
    if (var741 <= 0) return 1;
    return 43;
}

int func631(int var972) {
    if (var972 <= 0) return 1;
    return func631(var972 - 1);
}


int main() {
    for (int var282 = 0; var282 < 10; var282++) {
        var282 += 4;
    }    for (int var441 = 0; var441 < 9; var441++) {
        var441 += 1;
    }    for (int var923 = 0; var923 < 13; var923++) {
        var923 += 1;
    }

    int var572 = 17;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    return 0;
}
