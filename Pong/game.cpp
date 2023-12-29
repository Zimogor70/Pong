#define isDown(b) input->buttons[b].isDown
#define pressed(b) (input->buttons[b].isDown && input->buttons[b].changed)
#define released(b) (!input->buttons[b].isDown && input->buttons[b].changed)

float playerPositionX = 0.f;
float playerPositionY = 0.f;

internalVariable void simulateGame(Input* input) {
	clearScreen(0xff5500);
	if (pressed(BUTTON_UP)) playerPositionY += 1.f;
	if (pressed(BUTTON_DOWN)) playerPositionY -= 1.f;
	if (pressed(BUTTON_LEFT)) playerPositionX -= 1.f;
	if (pressed(BUTTON_RIGHT)) playerPositionX += 1.f;
	
	drawRectangle(0, 0, 4, 1, 0x00ff22);
	drawRectangle(4, 0, 1, 6, 0xffff22);
	//drawRectangle(playerPositionX-20, playerPositionY+20, 8, 3, 0xffff22);
}
