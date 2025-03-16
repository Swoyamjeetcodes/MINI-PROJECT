
#include <stdio.h>


int func992(int var665) {
    if (var665 <= 0) return 1;
    return func992(var665 - 1);
}


int main() {
    for (int var707 = 0; var707 < 12; var707++) {
        var707 += 2;
    }

    int var682 = 20;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    return 0;
}
