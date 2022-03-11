# APD - Tema 1
# Octombrie 2021

build:
	@echo "Building..."
	@g++ -o tema1_par tema1_par.cpp -lm -Wall -Werror -lpthread
	@echo "Done"

build_debug:
	@echo "Building debug..."
	@g++ -o tema1_par tema1_par.cpp -lm -Wall -Werror -O0 -g3 -DDEBUG -lpthread
	@echo "Done"

clean:
	@echo "Cleaning..."
	@rm -rf tema1_par
	@echo "Done"
