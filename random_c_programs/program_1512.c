
#include <stdio.h>


int func845(int var837) {
    if (var837 <= 0) return 1;
    return func845(var837 - 1);
}

int func704(int var693) {
    if (var693 <= 0) return 1;
    return func704(var693 - 1);
}

int func467(int var426) {
    if (var426 <= 0) return 1;
    return 77;
}

int func601(int var292) {
    if (var292 <= 0) return 1;
    return 26;
}

int func192(int var630) {
    if (var630 <= 0) return 1;
    return 51;
}


int main() {
    int var448 = 0;
    while (var448 < 15) {
        var448 += 1;
        var448++;
    }    for (int var649 = 0; var649 < 10; var649++) {
        var649 += 2;
    }

    int var682 = 55;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    int var257 = 66;
    if (var257 % 2 == 0) {
        printf("var257 is even\n");
    } else {
        printf("var257 is odd\n");
    }

    return 0;
}
