
#include <stdio.h>


int func640(int var904) {
    if (var904 <= 0) return 1;
    return func640(var904 - 1);
}

int func695(int var382) {
    if (var382 <= 0) return 1;
    return func695(var382 - 1);
}

int func997(int var133) {
    if (var133 <= 0) return 1;
    return 34;
}


int main() {
    int var994 = 0;
    while (var994 < 11) {
        var994 += 1;
        var994++;
    }

    int var67 = 12;
    if (var67 % 2 == 0) {
        printf("var67 is even\n");
    } else {
        printf("var67 is odd\n");
    }

    return 0;
}
