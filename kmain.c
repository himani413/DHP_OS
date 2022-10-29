#include "drivers/serial_port.h"
#include "drivers/frame_buffer.h"

int main()
    {
        //fb_write_cell(0, 'A', FB_GREEN, FB_DARK_GREY);

	//fb_move_cursor(600);
	char msg[] = "Welcome to DHP OS. Have a Nice Day!";
   
        serial_write(0x3F8, msg, 35);
    	fb_write( msg, 35);
    }

