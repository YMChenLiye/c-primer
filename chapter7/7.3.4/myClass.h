#include <iostream>
#include <string>
#include <vector>
class Screen;
class Window_mgr {
	public:
	using ScreenIndex = std::vector<Screen>::size_type;
		inline void clear(ScreenIndex);
	private:
		std::vector<Screen> screens;
};


class Screen
{
	friend void Window_mgr::clear(ScreenIndex);
	public:
	using pos=std::string::size_type;
	Screen() =default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
	Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
	char get() const	{return contents[cursor];}
	char get(pos ht,pos wd) const	{return contents[ht*width+wd];}
	Screen &move(pos r,pos c)	{cursor=r*width+c;return *this;}
	Screen &set(char c)	{contents[cursor]=c;return *this;}
	Screen &set(pos r,pos col,char ch)	{contents[r*width+col]=ch;}
	Screen &display(std::ostream &os)	{do_display(os);return *this;}
	const Screen &display(std::ostream &os)	const	{do_display(os);return *this;}

	private:
	pos cursor=0;
	pos height=0,width=0;
	std::string contents;

	void do_display(std::ostream &os) const	{os<<contents;}
};


inline void Window_mgr::clear(ScreenIndex i)
{
	Screen &s=screens[i];
	s.contents=std::string(s.height*s.width,' ');
}


