
#include <stdio.h>


int func917(int var893) {
    if (var893 <= 0) return 1;
    return func917(var893 - 1);
}


int main() {
    for (int var566 = 0; var566 < 12; var566++) {
        var566 += 1;
    }

    int var158 = 60;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    return 0;
}
