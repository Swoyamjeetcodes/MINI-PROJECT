
#include <stdio.h>


int func732(int var191) {
    if (var191 <= 0) return 1;
    return func732(var191 - 1);
}


int main() {
    for (int var18 = 0; var18 < 15; var18++) {
        var18 += 3;
    }

    int var156 = 70;
    if (var156 % 2 == 0) {
        printf("var156 is even\n");
    } else {
        printf("var156 is odd\n");
    }

    return 0;
}
