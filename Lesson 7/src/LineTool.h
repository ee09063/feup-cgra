#pragma once

#include "CanvasTool.h"

class LineTool: public CanvasTool {
public:
	LineTool(CGFcanvas *cnv) :
			CanvasTool(cnv) {
		sx = sy = currx = curry = -1;
	}

	virtual ~LineTool() {

	}

	virtual void mousePressed(int x, int y);
	virtual void mouseDragged(int x, int y);
	virtual void mouseReleased(int x, int y);

	virtual void drawLine(int xi, int yi, int xf, int yf);

	int sx, sy, currx, curry;
};
