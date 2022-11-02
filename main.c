#include <raylib.h>
#include <stdio.h>

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 800;
	Vector2 pixel = { (float)240,(float)250 };
	Vector2 pixelsize = {(float)20,(float)56 };
	InitWindow(screenWidth, screenHeight, "a basic bitch game");
	SetTargetFPS(30);
	while(!WindowShouldClose())
	{
		if(IsKeyPressed(KEY_DOWN)) 
		{
			pixel.y += 2.0f;
		}
		
		if(IsKeyPressed(KEY_UP)) 
		{
			pixel.y -= 2.0f;
		}

		if(IsKeyPressed(KEY_LEFT)) 
		{
			pixel.x -= 2.0f;
		}

		if(IsKeyPressed(KEY_RIGHT)) 
		{
			pixel.x += 2.0f;
		}
		BeginDrawing();
		ClearBackground(BLACK);
		ShowCursor();
		EnableCursor();
		DrawRectangleV(pixel,pixelsize,GREEN);
		DrawText("Wow you made it work u sussy baka",180,400,20,RED);
		int a = GetFPS();
		EndDrawing();
	}
	CloseWindow();
	printf("program ran succesfully \n");	
	return 0;
	
}
