#ifndef Screen_h
#define Screen_h
#include <string>
#include <iostream>

template<unsigned H,unsigned W>
class Screen{
	public:
		typedef std::string::size_type pos;
		Screen()=default;
		Screen(char c):contents(H*W,c) { }
		char get() const { return contents[cursor]; }
		Screen &move(pos r,pos c);

		friend std::ostream& operator<<(std::ostream &os,const Screen<H,W> &s)
		{
			for(int i=0;i<s.hight;++i)
			{
				for(int j=0;j<s.width;++j)
				{
					os<<s.contents[i*s.width+j];
				}
				os<<std::endl;
			}
			return os;
		}

		friend std::istream& operator>>(std::istream &is,Screen<H,W> &s)
		{
			char a;
			is>>a;
			std::string temp(H*W,a);
			s.contents=temp;
			return is;
		}

	private:
		pos cursor=0;
		pos hight=H; pos width=W;
		std::string contents;
};

template<unsigned H,unsigned W>
Screen<H,W> &Screen<H,W>::move(pos r,pos c)
{
	cursor=r*width+c;
	return *this;
}

#endif
