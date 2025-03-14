
#include <stdio.h>


int func776(int var4) {
    if (var4 <= 0) return 1;
    return func776(var4 - 1);
}

int func667(int var1000) {
    if (var1000 <= 0) return 1;
    return func667(var1000 - 1);
}

int func265(int var802) {
    if (var802 <= 0) return 1;
    return func265(var802 - 1);
}


int main() {
    for (int var161 = 0; var161 < 17; var161++) {
        var161 += 5;
    }

    int var364 = 84;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    int var770 = 59;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    return 0;
}
