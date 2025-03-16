
#include <stdio.h>


int func185(int var173) {
    if (var173 <= 0) return 1;
    return 20;
}

int func691(int var397) {
    if (var397 <= 0) return 1;
    return func691(var397 - 1);
}


int main() {
    for (int var592 = 0; var592 < 20; var592++) {
        var592 += 2;
    }

    int var429 = 18;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    int var645 = 31;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    int var385 = 46;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    return 0;
}
