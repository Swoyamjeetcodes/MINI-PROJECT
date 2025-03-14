
#include <stdio.h>


int func800(int var957) {
    if (var957 <= 0) return 1;
    return func800(var957 - 1);
}

int func290(int var482) {
    if (var482 <= 0) return 1;
    return 20;
}

int func301(int var43) {
    if (var43 <= 0) return 1;
    return func301(var43 - 1);
}

int func757(int var870) {
    if (var870 <= 0) return 1;
    return 97;
}


int main() {
    int var962 = 0;
    while (var962 < 6) {
        var962 += 5;
        var962++;
    }    int var197 = 0;
    while (var197 < 12) {
        var197 += 5;
        var197++;
    }

    int var555 = 6;
    if (var555 % 2 == 0) {
        printf("var555 is even\n");
    } else {
        printf("var555 is odd\n");
    }

    return 0;
}
