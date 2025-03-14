
#include <stdio.h>


int func335(int var328) {
    if (var328 <= 0) return 1;
    return func335(var328 - 1);
}

int func148(int var209) {
    if (var209 <= 0) return 1;
    return func148(var209 - 1);
}

int func921(int var222) {
    if (var222 <= 0) return 1;
    return func921(var222 - 1);
}

int func566(int var410) {
    if (var410 <= 0) return 1;
    return 28;
}


int main() {
    for (int var247 = 0; var247 < 8; var247++) {
        var247 += 4;
    }    for (int var631 = 0; var631 < 10; var631++) {
        var631 += 1;
    }

    int var811 = 89;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    int var518 = 65;
    if (var518 % 2 == 0) {
        printf("var518 is even\n");
    } else {
        printf("var518 is odd\n");
    }

    return 0;
}
