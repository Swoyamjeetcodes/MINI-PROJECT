
#include <stdio.h>


int func164(int var111) {
    if (var111 <= 0) return 1;
    return func164(var111 - 1);
}

int func247(int var543) {
    if (var543 <= 0) return 1;
    return 100;
}


int main() {
    for (int var32 = 0; var32 < 10; var32++) {
        var32 += 5;
    }    int var96 = 0;
    while (var96 < 20) {
        var96 += 1;
        var96++;
    }    for (int var692 = 0; var692 < 13; var692++) {
        var692 += 1;
    }

    int var373 = 54;
    if (var373 % 2 == 0) {
        printf("var373 is even\n");
    } else {
        printf("var373 is odd\n");
    }

    return 0;
}
