#include <iostream>
#include <bitset>

using namespace std;

template<unsigned N>
class Quiz{
	public:
		Quiz()=default;
		Quiz(const string &s):bitquiz(s) { }

		template<unsigned M>
		friend std::size_t grade(Quiz<M> const &,Quiz<M> const &);

		template<unsigned M>
		friend std::ostream& operator<<(std::ostream &,Quiz<M> const &);

		void updata(std::pair<std::size_t,bool>);
	private:
		bitset<N> bitquiz;
};

template<unsigned M>
std::size_t grade(Quiz<M> const &corAns,Quiz<M> const &stuAns)
{	
	auto result=stuAns.bitquiz ^ corAns.bitquiz;
	result.flip();
	return result.count();
}
template<unsigned M>
std::ostream &operator<<(std::ostream &os,Quiz<M> const &quiz)
{
	os<<quiz.bitquiz;
	return os;
}
template<unsigned N>
void Quiz<N>::updata(std::pair<std::size_t,bool> pair)
{
	bitquiz.set(pair.first,pair.second);
}


int main()
{
	std::string s="1010101";
	Quiz<10> quiz(s);
	std::cout<<quiz<<std::endl;
	
	quiz.updata(std::make_pair(1,true));
	std::cout<<quiz<<std::endl;

	std::string answer="10011";
	std::string stu_answer="11001";
	Quiz<5> ans(answer),stu_ans(stu_answer);
	std::cout<<grade(ans,stu_ans)<<std::endl;


	return 0;
}
