#ifndef Vec_h
#define Vec_h
#include <memory>

template<typename T>
class Vec{
	public:
		Vec():elements(nullptr),first_free(nullptr),cap(nullptr) { }
		Vec(const Vec&);
		Vec(std::initializer_list<T> il);
		Vec& operator=(const Vec&);
		~Vec();
		void push_back(const T&);
		size_t size() const { return first_free-elements; }
		size_t capacity() const { return cap-elements; }
		T* begin() const { return elements;}
		T* end() const { return first_free; }
		
		void reserve(std::size_t n);
		void resize(std::size_t n);
		void resize(std::size_t n,const T &t);
	private:
		static std::allocator<T> alloc;
		void chk_n_alloc() { if(size()==capacity()) reallocate(); }
		std::pair<T*,T*> alloc_n_copy(const T*,const T*);
		void free();
		void reallocate();
		T* elements;
		T* first_free;
		T* cap;
};

template<typename T>
void Vec<T>::push_back(const T &e)
{
	chk_n_alloc();
	alloc.construct(first_free++,e);
}

template<typename T>
std::pair<T*,T*> Vec<T>::alloc_n_copy(const T *b,const T *e)
{
	auto data=alloc.allocate(e-b);
	return { data,std::uninitialized_copy(b,e,data)};
}

template<typename T>
Vec<T>::Vec(const Vec& v)
{
	auto newdata=alloc_n_copy(v.begin(),v.end());
	elements=newdata.first;
	first_free=cap=newdata.second;
}

template<typename T>
Vec<T>::Vec(std::initializer_list<T> il)
{
	auto newdata=alloc_n_copy(il.begin(),il.end());
	elements=newdata.first;
	first_free=cap=newdata.second;
}


template<typename T>
void Vec<T>::free()
{
	if(elements)
	{
		for(auto p=elements;p!=first_free;)
		{
			alloc.destroy(p++);
		}
		alloc.deallocate(elements,cap-elements);
	}
}

template<typename T>
Vec<T>& Vec<T>::operator=(const Vec &rhs)
{
	auto newdata=alloc_n_copy(rhs.begin(),rhs.end());
	free();
	elements=newdata.first;
	first_free=cap=newdata.second;
	return *this;
}

template<typename T>
Vec<T>::~Vec()
{
	free();
}

template<typename T>
void Vec<T>::reallocate()
{
	auto newcapacity= size() ? 2*size() : 1;
	auto newdata=alloc.allocate(newcapacity);
	auto dest=newdata;
	auto elem=elements;
	for(size_t i=0;i !=size();++i)
	{
		alloc.construct(dest++,std::move(*elem++));
	}
	free();
	elements=newdata;
	first_free=dest;
	cap=elements+newcapacity;
}

template<typename T>
void Vec<T>::reserve(std::size_t n)
{
	while(n>=capacity())
	{
		reallocate();
	}
}

template<typename T>
void Vec<T>::resize(std::size_t n)
{
	resize(n,T());
}

template<typename T>
void Vec<T>::resize(std::size_t n,const T &t)
{
	if(n<=size())
	{
		for(auto p=elements+n;p!=first_free;++p)
		{
			alloc.destroy(p);
		}
		first_free=elements+n;
	}
	else if(n>size())
	{
		for(int i=size();i<n;++i)
		{
			push_back(t);
		}
	}
}





template<typename T>
std::allocator<T> Vec<T>::alloc;

#en
