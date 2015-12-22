#ifndef class_Screen_h
#define class_Screen_h
#include <string>

class Screen
{
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

public:
	pos cursor=0;
	pos height=0,width=0;
	std::string contents;

	void do_display(std::ostream &os) const	{os<<contents;}
};
#endif
