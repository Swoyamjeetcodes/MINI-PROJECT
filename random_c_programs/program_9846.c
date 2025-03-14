
#include <stdio.h>


int func693(int var497) {
    if (var497 <= 0) return 1;
    return func693(var497 - 1);
}

int func94(int var136) {
    if (var136 <= 0) return 1;
    return func94(var136 - 1);
}


int main() {
    for (int var262 = 0; var262 < 17; var262++) {
        var262 += 3;
    }    int var134 = 0;
    while (var134 < 6) {
        var134 += 5;
        var134++;
    }

    int var775 = 49;
    if (var775 % 2 == 0) {
        printf("var775 is even\n");
    } else {
        printf("var775 is odd\n");
    }

    return 0;
}
