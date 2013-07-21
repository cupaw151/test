#include<iostream>
#include<string>
using namespace std;

class poke
{
protected:
	int lvl;
	int maxhp;
	int xp;
public:
	void setlvl(int lvl)
	{
		this->lvl=lvl;
	}
	void setmaxhp(int maxhp)
	{
		this->maxhp=maxhp;
	}
	int getlvl()
	{
		return lvl;
	}
	int getmaxhp()
	{
		return maxhp;
	}
	void setxp()
	{
		this->xp=xp;
	}
	
	int getxp()
	{
		return xp;
	}
	void lvlup()
	{
		xp=xp-100;
		lvl++;
	}
};
class hero:public poke
{
protected:
	string nama;
	
public:
	void setnama(string nama)
	{
		this->nama=nama;
	}
	
	
};
class enemy:public poke
{

};

void main(){}