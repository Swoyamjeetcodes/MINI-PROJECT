
#include <stdio.h>


int func41(int var596) {
    if (var596 <= 0) return 1;
    return func41(var596 - 1);
}

int func941(int var391) {
    if (var391 <= 0) return 1;
    return 59;
}

int func117(int var340) {
    if (var340 <= 0) return 1;
    return func117(var340 - 1);
}


int main() {
    for (int var298 = 0; var298 < 19; var298++) {
        var298 += 2;
    }    for (int var937 = 0; var937 < 16; var937++) {
        var937 += 1;
    }

    int var29 = 45;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
