
#include <stdio.h>


int func797(int var842) {
    if (var842 <= 0) return 1;
    return 32;
}

int func934(int var70) {
    if (var70 <= 0) return 1;
    return func934(var70 - 1);
}


int main() {
    for (int var109 = 0; var109 < 15; var109++) {
        var109 += 4;
    }

    int var128 = 25;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    return 0;
}
