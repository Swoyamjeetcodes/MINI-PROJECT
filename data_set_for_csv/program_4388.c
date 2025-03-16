
#include <stdio.h>


int func135(int var654) {
    if (var654 <= 0) return 1;
    return func135(var654 - 1);
}


int main() {
    int var796 = 0;
    while (var796 < 13) {
        var796 += 2;
        var796++;
    }

    int var416 = 17;
    if (var416 % 2 == 0) {
        printf("var416 is even\n");
    } else {
        printf("var416 is odd\n");
    }

    return 0;
}
