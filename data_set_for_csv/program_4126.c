
#include <stdio.h>


int func578(int var98) {
    if (var98 <= 0) return 1;
    return func578(var98 - 1);
}

int func862(int var345) {
    if (var345 <= 0) return 1;
    return func862(var345 - 1);
}


int main() {
    for (int var115 = 0; var115 < 6; var115++) {
        var115 += 2;
    }    int var833 = 0;
    while (var833 < 12) {
        var833 += 5;
        var833++;
    }

    int var821 = 55;
    if (var821 % 2 == 0) {
        printf("var821 is even\n");
    } else {
        printf("var821 is odd\n");
    }

    int var621 = 68;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    int var96 = 72;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    return 0;
}
