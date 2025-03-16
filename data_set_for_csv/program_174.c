
#include <stdio.h>


int func265(int var872) {
    if (var872 <= 0) return 1;
    return func265(var872 - 1);
}

int func793(int var336) {
    if (var336 <= 0) return 1;
    return func793(var336 - 1);
}

int func466(int var672) {
    if (var672 <= 0) return 1;
    return func466(var672 - 1);
}


int main() {
    for (int var803 = 0; var803 < 9; var803++) {
        var803 += 2;
    }    int var159 = 0;
    while (var159 < 16) {
        var159 += 2;
        var159++;
    }

    int var858 = 23;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    return 0;
}
