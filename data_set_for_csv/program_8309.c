
#include <stdio.h>


int func905(int var331) {
    if (var331 <= 0) return 1;
    return 32;
}

int func486(int var797) {
    if (var797 <= 0) return 1;
    return 10;
}

int func632(int var566) {
    if (var566 <= 0) return 1;
    return func632(var566 - 1);
}


int main() {
    for (int var109 = 0; var109 < 10; var109++) {
        var109 += 3;
    }

    int var1000 = 16;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
