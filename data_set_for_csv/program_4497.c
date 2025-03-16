
#include <stdio.h>


int func51(int var997) {
    if (var997 <= 0) return 1;
    return func51(var997 - 1);
}


int main() {
    for (int var98 = 0; var98 < 18; var98++) {
        var98 += 5;
    }

    int var325 = 87;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    return 0;
}
