
#include <stdio.h>


int func632(int var325) {
    if (var325 <= 0) return 1;
    return func632(var325 - 1);
}


int main() {
    for (int var71 = 0; var71 < 20; var71++) {
        var71 += 2;
    }

    int var1000 = 50;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
