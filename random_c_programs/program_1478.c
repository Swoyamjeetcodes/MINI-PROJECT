
#include <stdio.h>


int func272(int var444) {
    if (var444 <= 0) return 1;
    return func272(var444 - 1);
}

int func978(int var974) {
    if (var974 <= 0) return 1;
    return func978(var974 - 1);
}


int main() {
    for (int var536 = 0; var536 < 18; var536++) {
        var536 += 2;
    }

    int var180 = 52;
    if (var180 % 2 == 0) {
        printf("var180 is even\n");
    } else {
        printf("var180 is odd\n");
    }

    return 0;
}
