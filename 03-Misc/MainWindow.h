/*****************************************************
 *	C++ code generated with Nana Creator (0.28.0)
 *	GitHub repo: https://github.com/besh81/nana-creator
 *
 * PLEASE EDIT ONLY INSIDE THE TAGS:
 *		//<*tag
 *			user code
 *		//*>
*****************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <nana/gui/widgets/panel.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/widgets/menubar.hpp>

//<*includes

//*>


class MainWindow
	: public nana::panel<true>
{
public:
	MainWindow() = default;

	MainWindow(nana::window wd, const nana::rectangle& r = {}, bool visible = true)
		: nana::panel<true>(wd, r, visible)
	{
		this->create(wd, r, visible);
	}

	~MainWindow()
	{
		//<*dtor

		//*>
	}

	bool create(nana::window wd, const nana::rectangle& r = {}, bool visible = true)
	{
		if(!nana::panel<true>::create(wd, r, visible))
			return false;

		init_();

		//<*ctor

		//*>

		return true;
	}


private:
	void init_()
	{
		_place.bind(*this);
		_place.div("vert margin=[5,5,5,5] gap=2 arrange=[35,variable] _field_");
		// MenuBar
		MenuBar.create(*this);
		_place["_field_"] << MenuBar;
		MenuBar.typeface(nana::paint::font("", 9, {200, false, false, false}));
		MenuBar.push_back("Datei");
		MenuBar.push_back("Bearbeiten");
		auto* MenuBar_2 = &MenuBar.push_back("Ansicht");
		MenuBar_2->append("Logger");
		MenuBar_2->check_style(0, static_cast<nana::menu::checks>(1));
		MenuBar_2->checked(0, true);
		MenuBar.push_back("Extras");
		// MainPanel
		MainPanel.create(*this);
		MainPanel.bgcolor(nana::color(212,230,200));
		_place["_field_"] << MainPanel;

		_place.collocate();
	}


protected:
	nana::place _place;
	nana::menubar MenuBar;
	nana::panel<true> MainPanel;


	//<*declarations

	//*>
};

#endif //MAINWINDOW_H

