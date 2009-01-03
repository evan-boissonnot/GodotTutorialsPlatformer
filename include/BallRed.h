#ifndef BALLRED_H_
#define BALLRED_H_
#include "Ball.h"

extern const unsigned char ball_red_Tiles[256];

class BallRed: public Ball
{
	public:
		BallRed(int pallet_number2);
		void init(u8 pallet_number, 
				 int position_x, int position_y, 
			     int velocity_vector_x, int velocity_vector_y);
	protected:
		/** Whether pallet memory and tile mem were defined for Gummy characters */
	    static int pallet_tile_mem_loaded;
	    /** GFX memory index (how far into GFX memory are the tiles for this 
	    	               character: if using same tile set for all gummys)*/
	   	static int gfx_memory_index;
};
#endif /*BALLRED_H_*/
