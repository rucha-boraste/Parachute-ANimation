#include <math.h>
#include <graphics.h>
#include <direct.h>

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int x = 50;
    int y = getmaxy();
    int i;

    for (i = 0; i < 900; i++)
    {
        setcolor(14);
        setfillstyle(SOLID_FILL, 14);
        arc(x, y, 0, 180, 40);
        arc(x - 10, y, 0, 180, 10);
        arc(x - 30, y, 0, 180, 10);
        arc(x + 10, y, 0, 180, 10);
        arc(x + 30, y, 0, 180, 10);

        floodfill(x, y - 35, 14);

        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL, DARKGRAY);
        sector(x, y + 40, 0, 360, 30, 5);
        line(x - 40, y, x - 30, y + 40);
        line(x + 40, y, x + 30, y + 40);
        line(x, y, x, y + 40);
        line(x - 20, y, x - 10, y + 40);
        line(x + 20, y, x + 10, y + 40);

        setcolor(10);
        setfillstyle(SOLID_FILL, 10);
        line(x - 30, y + 40, x - 18, y + 65);
        line(x - 18, y + 65, x + 18, y + 65);
        line(x + 30, y + 40, x + 18, y + 65);
        ellipse(x, y + 40, 180, 360, 30, 5);
        floodfill(x + 15, y + 60, 10);

        setcolor(WHITE);
        line(0, getmaxy(), x - 30, y + 40);
        if (i % 3 == 0)
        {
            x = x - 4;
            y = y + 4;
        }
        else
        {
            x = x + 4;
            y = y - 4;
        }
        delay(150);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}