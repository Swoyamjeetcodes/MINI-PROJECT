
#include <stdio.h>


int func76(int var655) {
    if (var655 <= 0) return 1;
    return func76(var655 - 1);
}

int func908(int var557) {
    if (var557 <= 0) return 1;
    return 30;
}


int main() {
    int var882 = 0;
    while (var882 < 10) {
        var882 += 2;
        var882++;
    }    for (int var142 = 0; var142 < 19; var142++) {
        var142 += 2;
    }

    int var961 = 87;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    int var913 = 67;
    if (var913 % 2 == 0) {
        printf("var913 is even\n");
    } else {
        printf("var913 is odd\n");
    }

    return 0;
}
