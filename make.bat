
g++ main.cpp -Os -Wall -I$(RAYLIB_PATH)\src -Iexternal -DPLATFORM_DESKTOP -lraylib -lopengl32 -lgdi32 -lwinmm 
