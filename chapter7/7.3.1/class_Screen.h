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
private:
	pos cursor=0;
	pos height=0,width=0;
	std::string contents;
};
#endif
