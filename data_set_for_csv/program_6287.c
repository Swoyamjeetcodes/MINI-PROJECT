
#include <stdio.h>


int func932(int var158) {
    if (var158 <= 0) return 1;
    return func932(var158 - 1);
}


int main() {
    for (int var133 = 0; var133 < 11; var133++) {
        var133 += 4;
    }

    int var163 = 12;
    if (var163 % 2 == 0) {
        printf("var163 is even\n");
    } else {
        printf("var163 is odd\n");
    }

    return 0;
}
