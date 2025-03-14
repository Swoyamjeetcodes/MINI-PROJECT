
#include <stdio.h>


int func739(int var725) {
    if (var725 <= 0) return 1;
    return func739(var725 - 1);
}


int main() {
    for (int var175 = 0; var175 < 19; var175++) {
        var175 += 3;
    }

    int var961 = 31;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    return 0;
}
