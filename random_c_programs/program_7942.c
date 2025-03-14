
#include <stdio.h>


int func783(int var587) {
    if (var587 <= 0) return 1;
    return 67;
}

int func683(int var110) {
    if (var110 <= 0) return 1;
    return func683(var110 - 1);
}


int main() {
    for (int var322 = 0; var322 < 17; var322++) {
        var322 += 1;
    }

    int var46 = 82;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    return 0;
}
