#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;
    let length = 0;
    while (notQuit) {
        if (isTrigger(KEY_D)) {
            ++area;
        }
        if (isTrigger(KEY_A)) {
            --area;
        }

            length = sqrt(area);

            clear(150);
            mathAxis(4.1);

            fill(255, 150, 150);
            mathRect(0, 0, length, -length);

            fill(0);
            textSize(50);
            text("ñ êœ = " + area, 0, 60);
            text("Å„" + area + " = " + length, 0, 120);

    }
}