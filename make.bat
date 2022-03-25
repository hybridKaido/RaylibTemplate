SET CC = g++
$(CC) main.cpp -oapp.exe -Os -Wall -Iinclude\ -I$(RAYLIB_PATH)\src -Iexternal -DPLATFORM_DESKTOP -lraylib -lopengl32 -lgdi32 -lwinmm 
