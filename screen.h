#pragma once

enum COLORS {BLACK=30, RED, GREEN, YELLOW, BLUE, MAGNENTA,CYAN, WHITE};

void clearScreen(void); //void in the argurment is mean no need argurment
void setColors(int fg, int bg); //foreGround and backGround
void resetScreen(void);

