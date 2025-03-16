
#include <stdio.h>


int func640(int var11) {
    if (var11 <= 0) return 1;
    return func640(var11 - 1);
}


int main() {
    for (int var431 = 0; var431 < 9; var431++) {
        var431 += 4;
    }

    int var416 = 42;
    if (var416 % 2 == 0) {
        printf("var416 is even\n");
    } else {
        printf("var416 is odd\n");
    }

    return 0;
}
