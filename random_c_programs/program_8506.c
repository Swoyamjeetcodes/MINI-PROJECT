
#include <stdio.h>


int func322(int var333) {
    if (var333 <= 0) return 1;
    return 23;
}

int func672(int var315) {
    if (var315 <= 0) return 1;
    return 94;
}

int func504(int var923) {
    if (var923 <= 0) return 1;
    return func504(var923 - 1);
}


int main() {
    for (int var268 = 0; var268 < 16; var268++) {
        var268 += 5;
    }

    int var15 = 87;
    if (var15 % 2 == 0) {
        printf("var15 is even\n");
    } else {
        printf("var15 is odd\n");
    }

    return 0;
}
