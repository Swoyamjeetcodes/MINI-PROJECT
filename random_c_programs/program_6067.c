
#include <stdio.h>


int func374(int var649) {
    if (var649 <= 0) return 1;
    return 18;
}

int func473(int var684) {
    if (var684 <= 0) return 1;
    return func473(var684 - 1);
}

int func826(int var405) {
    if (var405 <= 0) return 1;
    return 17;
}

int func723(int var99) {
    if (var99 <= 0) return 1;
    return func723(var99 - 1);
}

int func108(int var70) {
    if (var70 <= 0) return 1;
    return func108(var70 - 1);
}


int main() {
    for (int var505 = 0; var505 < 8; var505++) {
        var505 += 1;
    }

    int var838 = 53;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
