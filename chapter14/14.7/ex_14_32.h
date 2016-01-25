class StrBlobPtr;
class StrBlobPtrPointer
{
	public:
	StrBlobPtrPointer()=default;
	StrBlobPtrPointer(StrBlobPtr *p):pointer(p) { }
	StrBlobPtr& operator*();
	StrBlobPtr* operator->();
	private:
	StrBlobPtr *pointer;
};

StrBlobPtr& StrBlobPtrPointer::operator*()
{
	return *pointer;
}
StrBlobPtr* StrBlobPtrPointer::operator->()
{
	return & this->operator*();
}
