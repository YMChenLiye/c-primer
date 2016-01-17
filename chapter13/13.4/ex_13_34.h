#ifndef ex_13_34_h
#define ex_13_34_h
#include <iostream>
#include <string>
#include <set>
using std::string;
using std::set;

class Folder;
class Message{
	friend class Folder;
	public:
		Message(const string &s=""):contents(s) { }
		Message(const Message&);
		Message& operator=(const Message&);
		~Message();
	
		void save(Folder&);
		void remove(Folder&);
	private:
		string contents;
		set<Folder*> folders;
		//used by copy controls
		void add_to_Folders(const Message&);
		void remove_from_Folders();
		void addFld(Folder* f) { folders.insert(f); }
		void remFld(Folder* f) { folders.erase(f); }

};

class Folder{
	friend class Message;
	public:
		Folder()=default;
		Folder(const Folder&);
		Folder& operator=(const Folder&);
		~Folder();
	private:
		void add_to_Message(const Folder &);
		void remove_from_Message();
		void addMsg(Message* m) { msgs.insert(m); }
		void remMsg(Message* m) { msgs.erase(m); }
		set<Message*> msgs;
};

void Message::save(Folder& f)
{
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder& f)
{
	folders.erase(&f);
	f.remMsg(this);
}
void Message::add_to_Folders(const Message& m)
{
	for(auto f:m.folders)
		f->addMsg(this);
}
void Message::remove_from_Folders()
{
	for(auto f:folders)
		f->remMsg(this);
}
Message::Message(const Message& m):contents(m.contents),folders(m.folders) { add_to_Folders(m); }
Message& Message::operator=(const Message &m)
{
	remove_from_Folders();
	contents=m.contents;
	folders=m.folders;
	add_to_Folders(m);
	return *this;
}
Message::~Message()
{
	remove_from_Folders();
}

//========================================
void Folder::add_to_Message(const Folder &f)
{
	for(auto m:f.msgs)
		m->addFld(this);
}
void Folder::remove_from_Message()
{
	for(auto m:msgs)
		m->remFld(this);
}
Folder::Folder(const Folder& f):msgs(f.msgs) { add_to_Message(f); }
Folder& Folder::operator=(const Folder &f)
{
	remove_from_Message();
	msgs=f.msgs;
	add_to_Message(f);
	return *this;
}
Folder::~Folder()
{
	remove_from_Message();
}


#endif
