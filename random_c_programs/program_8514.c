
#include <stdio.h>


int func975(int var795) {
    if (var795 <= 0) return 1;
    return func975(var795 - 1);
}

int func647(int var289) {
    if (var289 <= 0) return 1;
    return 32;
}


int main() {
    int var584 = 0;
    while (var584 < 7) {
        var584 += 5;
        var584++;
    }

    int var131 = 81;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    int var752 = 99;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    return 0;
}
