
#include <stdio.h>


int func752(int var711) {
    if (var711 <= 0) return 1;
    return 15;
}

int func141(int var328) {
    if (var328 <= 0) return 1;
    return func141(var328 - 1);
}


int main() {
    int var559 = 0;
    while (var559 < 20) {
        var559 += 3;
        var559++;
    }

    int var772 = 83;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    int var180 = 73;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    int var42 = 99;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
