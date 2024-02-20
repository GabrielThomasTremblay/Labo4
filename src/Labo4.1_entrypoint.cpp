#include "entrypoint.h"
#include "raylib.h"

void Brique::setPosition(float x, float y){
    
return(x,y);
}
void Brique::setSize(float l, float h){

return(l,h);
}
void Brique::draw(){

   float x = setPosition(x,0);
   float y = setPosition(0,y);
   float l = setSize(l,0);
   float h = setSize(0,h);

    DrawRectangle(x,y,l,h,(Color){255,0,255,255} );
}

void Balle::setPosition(float x, float y){
    

return(x,y);
}
void Balle::setSize(float l, float h){

return(l,h);
}
void Balle::draw(){

   float x = setPosition(x,0);
   float y = setPosition(0,y);
   float l = setSize(l,0);
   float h = setSize(0,h);

    DrawRectangle(x,y,l,h,(Color){255,255,255,255} );
}

void Raquette::setPosition(float x, float y){
    
return(x,y);
}
void Raquette::setSize(float l, float h){

return(l,h);
}
void Raquette::draw(){

   float x = setPosition(x,0);
   float y = setPosition(0,y);
   float l = setSize(l,0);
   float h = setSize(0,h);

    DrawRectangle(x,y,l,h,(Color){0,255,0,255});
}
Brique brique;
Balle balle;
Raquette raquette;

void raylib_start(void){

    raquette.setPosition(0,10);
    raquette.setSize(30,20);

    balle.setPosition(0,30);
    balle.setSize(10,10);

    brique.setPosition(0,450);
    brique.setSize(30,20);

    InitWindow(500,500, "Breakout");
    SetTargetFPS(30);

    while (!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(BLACK);
        brique.draw();


        
        EndDrawing();        

    }
    CloseWindow();

    


}