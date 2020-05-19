#include "main_engine/MainEngine.h"

int main(int argc,char** argv) {
        MainEngine MainEngine;
        MainEngine.ReadConfigrationFiles(argc,argv);
        MainEngine.setParameters();
        MainEngine.run();
	return 0;
}
