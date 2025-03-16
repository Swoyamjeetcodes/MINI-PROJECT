
#include <stdio.h>


int func899(int var993) {
    if (var993 <= 0) return 1;
    return 55;
}

int func717(int var539) {
    if (var539 <= 0) return 1;
    return func717(var539 - 1);
}

int func240(int var328) {
    if (var328 <= 0) return 1;
    return 32;
}


int main() {
    for (int var77 = 0; var77 < 19; var77++) {
        var77 += 4;
    }

    int var149 = 95;
    if (var149 % 2 == 0) {
        printf("var149 is even\n");
    } else {
        printf("var149 is odd\n");
    }

    return 0;
}
