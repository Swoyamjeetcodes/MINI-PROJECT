
#include <stdio.h>


int func693(int var893) {
    if (var893 <= 0) return 1;
    return func693(var893 - 1);
}

int func469(int var305) {
    if (var305 <= 0) return 1;
    return 21;
}

int func404(int var183) {
    if (var183 <= 0) return 1;
    return func404(var183 - 1);
}

int func4(int var908) {
    if (var908 <= 0) return 1;
    return func4(var908 - 1);
}


int main() {
    int var223 = 0;
    while (var223 < 6) {
        var223 += 3;
        var223++;
    }    for (int var302 = 0; var302 < 7; var302++) {
        var302 += 2;
    }    int var559 = 0;
    while (var559 < 14) {
        var559 += 5;
        var559++;
    }

    int var128 = 94;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    return 0;
}
