// 01-Hello World
// Einfache Nana Anwendung

#include "01-HelloWorld.h"
#include <nana/gui.hpp>
#include <nana/gui/widgets/button.hpp>


using namespace std;



int main()
{
	nana::form fm;
	fm.caption("01-Hello World");
	nana::button btn(fm, nana::rectangle{ 20,20,150,30 });
	btn.caption("Abbruch");
	btn.events().click([&fm]{
		std::cout << "Hello World" << endl;
		fm.close();
		fm.close();
	});

	fm.show();
	nana::exec();


	return 0;
}
