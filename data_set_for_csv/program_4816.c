
#include <stdio.h>


int func926(int var289) {
    if (var289 <= 0) return 1;
    return func926(var289 - 1);
}

int func79(int var662) {
    if (var662 <= 0) return 1;
    return func79(var662 - 1);
}

int func689(int var258) {
    if (var258 <= 0) return 1;
    return 98;
}

int func202(int var958) {
    if (var958 <= 0) return 1;
    return func202(var958 - 1);
}

int func879(int var611) {
    if (var611 <= 0) return 1;
    return 63;
}


int main() {
    for (int var700 = 0; var700 < 19; var700++) {
        var700 += 2;
    }

    int var25 = 48;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
