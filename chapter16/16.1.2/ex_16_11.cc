
template <typename elemType> class ListItem;
template <typename elemType> class List
{
	public:
		List<elemType>();
		List<elemType>(const List<elemType> &);
		List<elemType>& operator=(const List<elemType> &);
		~List();
		void insert(ListItem<elemType> *ptr, elemType value);
		//                 ^^^^^^^^^^  -- template is not a type, the type must be provided

	private:
		ListItem<elemType> *front, *end;
		//      ^^^^^^^^ -- template is not a type, the type must be provided
};

int main()
{
	return 0;
}
