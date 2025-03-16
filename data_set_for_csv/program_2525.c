
#include <stdio.h>


int func235(int var229) {
    if (var229 <= 0) return 1;
    return func235(var229 - 1);
}


int main() {
    for (int var252 = 0; var252 < 20; var252++) {
        var252 += 2;
    }

    int var677 = 57;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    return 0;
}
