#include <fstream>
#include <iostream>

using namespace std;

class User
{
	string _name;
	string _login;
	string _pass;

public:
	/*User(string name, string login, string pass): _name(name),_login(login), _pass(pass)
	{}*/
	string getname()
	{
		return _name;
	}
	string getlogin()
	{
		return _login;
	}
	string getpass()
	{
		return _pass;
	}
	void setname (string name)
	{
		_name=name;
	}
	void setlogin (string log)
	{
		_login=log;
	}
	void setpass (string pas)
	{
		_pass=pas;
	}
};

class Message
{
	string _text;
	string _sender;
	string _receiver;

public:

	string gettext()
	{
		return _text;
	}
	string getsend()
	{
		return _sender;
	}
	string getrec()
	{
		return _receiver;
	}
	void settext (string text)
	{
		_text=text;
	}
	void setsend (string sender)
	{
		_sender=sender;
	}
	void setrec (string receiver)
	{
		_receiver=receiver;
	}
};

int main()
{
	User u1;
	string name1;
	string login1;
	string pass1;
	fstream user_f = fstream("user.txt", ios::in | ios::out);	
	if(!user_f)
	{
		user_f = fstream("user.txt", ios::in | ios::out | ios::trunc);
	}
	if(user_f)
	{
		user_f >> name1;
		user_f >> login1;
		user_f >> pass1;

		u1.setname(name1);
		u1.setlogin(login1);
		u1.setpass(pass1);
	
		cout << u1.getname() << '\n' << u1.getlogin() << '\n' << u1.getpass() << '\n';
		
		user_f.seekp(0);
		user_f << "Vasiliy";
		user_f << '\n';
		user_f << "vas80";
		user_f << '\n';
		user_f << "1122";
		user_f << '\n';
	}
	Message m1;
	string text1;
	string send1;
	string rec1;

	fstream mes_f = fstream("mes.txt", ios::in | ios::out);
	if(!mes_f)
	{	
		mes_f = fstream("mes.txt", ios::in | ios::out | ios::trunc);
	}
	if(mes_f)
	{
		mes_f >> text1;
		mes_f >> send1;
		mes_f >> pass1;

		m1.settext(text1);
		m1.setsend(send1);
		m1.setrec(pass1);

		cout << m1.gettext() << '\n' << m1.getsend() << '\n' << m1.getrec() << '\n';

		mes_f.seekp(0);
		mes_f << "Privet";
		mes_f << '\n';
		mes_f << "vasia";
		mes_f << '\n';
		mes_f << "Petia";
		mes_f << '\n';
	}
	return 0;
}
