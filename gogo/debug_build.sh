./configure --with-debug && make clean && neo-c header src/common.h src/main.c src/type.c src/vtable.c src/01fun.c src/02int.c src/03var.c && make && sudo make uninstall && sudo make install && make test

