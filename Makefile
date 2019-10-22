build:
	g++ -w -std=c++14 -Wfatal-errors \
	./src/*.cpp \
	-o"./Build/Debug/game" \
	-I"/usr/local/include" \
	-I"./lib/lua" \
	-L"/usr/lib/x86_64-linux-gnu" \
	-llua5.3 \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \
	-lSDL2_mixer;

clean:
	rm ./Build/Debug/game;

run:
	./Build/Debug/game;

