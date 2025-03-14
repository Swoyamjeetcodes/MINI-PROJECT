
#include <stdio.h>


int func371(int var117) {
    if (var117 <= 0) return 1;
    return func371(var117 - 1);
}


int main() {
    int var416 = 0;
    while (var416 < 17) {
        var416 += 4;
        var416++;
    }

    int var97 = 55;
    if (var97 % 2 == 0) {
        printf("var97 is even\n");
    } else {
        printf("var97 is odd\n");
    }

    return 0;
}
