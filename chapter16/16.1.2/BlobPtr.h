#ifndef BlobPtr_h
#define BlobPtr_h
#include "Blob.h"
#include <memory>
#include <vector>

template<typename> class BlobPtr;
template<typename T> bool operator==(const BlobPtr<T>,const BlobPtr<T>) const;
template<typename T> bool operator<(const BlobPtr<T>,const BlobPtr<T>) const ;

template<typename T> class BlobPtr{
	friend bool operator==<T>(const BlobPtr<T> &lhs,const BlobPtr<T> &rhs) const;
	friend bool operator< <T>(const BlobPtr<T> &lhs,const BlobPtr<T> &rhs) const;
	public:
		BlobPtr():curr(0);
		BlobPtr(Blob<T> &a,size_t sz=0):wptr(a),curr(sz) { }
		T& operator*() const
		{
			auto p=check(curr,"dereference past end");
			return (*p)[curr];
		}
		BlobPtr& operator++();
		BlobPtr& operator++(int);
		BlobPtr& operator--();
		BlobPtr& operator--(int);

	private:
		std::shared_ptr<vector<T>> check(std::size_t,const std::string &) const;
		std::weak_ptr<vector<T>> wptr;
		std::size_t curr;
};
template<typename T>
std::shared_ptr<vector<T>> BlobPtr<T>::check(std::size_t i,const std::string &msg) const
{
	std::shared_ptr<vector<T>> ret=wptr.lock();
	if(i<0 || i>ret.size())
	{
		throw out_of_range(msg);
	}
	return ret;
}

template<typename T>
BlobPtr<T>& BlobPtr<T>::operator++()
{
	check(curr+1,"out of range");
	curr++;
}

template<typename T>
BlobPtr<T>& BlobPtr<T>::operator--()
{
	check(curr-1,"out of range");
	curr--;
}

template<typename T>
BlobPtr<T> BlobPtr<T>::operator++(int)
{
	BlobPtr ret=*this;
	++*this;
	return ret;
}

template<typename T>
BlobPtr<T> BlobPtr<T>::operator--(int)
{
	BlobPtr ret=*this;
	--*this;
	return ret;
}

template<typename T>
bool operator==(const BlobPtr<T> &lhs,const BlobPtr<T> &rhs) const
{
	if(lhs.wptr.lock()!=rhs.wptr.lock())
	{
		throw runtime_error("ptr to differrent Blob");
	}
	return lhs.curr==rhs.curr;
}

template<typename T>
bool operator< (const BlobPtr<T> &lhs,const BlobPtr<T> &rhs) const 
{
	if(lhs.wptr.lock()!=rhs.wptr.lock())
	{
		throw runtime_error("ptr to different Blob");
	}
	return lhs.curr<rhs.curr;
}


#endif
