
#include <stdio.h>


int func933(int var117) {
    if (var117 <= 0) return 1;
    return func933(var117 - 1);
}


int main() {
    for (int var237 = 0; var237 < 13; var237++) {
        var237 += 2;
    }

    int var775 = 22;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
