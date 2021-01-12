
// Easy Nana Menu Example

#include <nana/gui.hpp>
#include <nana/gui/widgets/menu.hpp>
#include <nana/gui/widgets/button.hpp>

using namespace nana;

#include <iostream>

void on_menu_item(nana::menu::item_proxy& id) {
	std::size_t index = id.index();
	std::cout << "Menu item index: " << index << std::endl;
}

int main()
{
	form Form;
	Form.caption("02-Menu");



	menu MyMenu;
	MyMenu.append("Item 0", &on_menu_item);
	MyMenu.append("Item 1", &on_menu_item);
	MyMenu.append_splitter();
	MyMenu.append("Item 2", &on_menu_item);
	MyMenu.append("Item 3", &on_menu_item);

	button MyButton(Form, rectangle{ 20,20,150,30 });
	MyButton.caption("Menu");
	MyButton.events().mouse_down(menu_popuper(MyMenu,MyButton, nana::point(100, 36), mouse::any_button));

	Form.show();
	exec();
}



