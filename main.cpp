#include "bmp.h"


void main() {
	graphics::bitmap_type bmp;
	bmp.m_p_data = nullptr;
	graphics::create(bmp, 200, 100);
	graphics::write_to_file(bmp, "test.bmp");
}