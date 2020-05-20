#include "main_engine/MainEngine.h"

int main(int argc,char* argv) {
        MainEngine MainEngine;
        MainEngine.ReadConfigrationFiles(argc, argv);
        MainEngine.SetupParameters();
        MainEngine.Run();

		getchar();
		return 0;
}
