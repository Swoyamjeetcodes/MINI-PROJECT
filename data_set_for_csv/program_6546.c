
#include <stdio.h>


int func163(int var449) {
    if (var449 <= 0) return 1;
    return func163(var449 - 1);
}


int main() {
    for (int var288 = 0; var288 < 18; var288++) {
        var288 += 2;
    }

    int var322 = 91;
    if (var322 % 2 == 0) {
        printf("var322 is even\n");
    } else {
        printf("var322 is odd\n");
    }

    return 0;
}
