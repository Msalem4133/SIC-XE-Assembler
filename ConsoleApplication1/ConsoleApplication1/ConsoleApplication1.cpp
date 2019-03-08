// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <map>
#include<vector>

using namespace std;

class help {
public:
	string its(int i)
	{
		string k = "0123456789";
		string b = "";
		for (int m = i;i>0;i /= 10)
		{
			b = k[m % 10] + b;
		}
		return b;
	}

	int retnum(string s)
	{
		string c = s;
		int n;
		n = atoi(c.c_str());
		return n;

	}
	string sitb(char s)
	{
		string h1 = "01234567";
		int d = h1.find(s);

		string k = "";
		int n = d;
		int p;
		for (int i = 0;i <= 2;i++)
		{
			p = n % 2;
			k = h1[p] + k;
			n /= 2;
		}
		return k;
	}
	int htd(string s)
	{
		string h = "0123456789ABCDEF";

		int d;
		int k = 0;
		int p = 1;
		for (int i = s.length() - 1;i >= 0;i--)
		{
			d = h.find(s[i]);
			k = k + p*d;
			p *= 16;

		}
		return k;
	}

	int btd(string s)
	{
		string h = "01";

		int d;
		int k = 0;
		int p = 1;
		for (int i = s.length() - 1;i >= 0;i--)
		{
			d = h.find(s[i]);
			k = k + p*d;
			p *= 2;

		}
		return k;
	}



	string dth(int s)
	{
		string h = "0123456789ABCDEF";
		string f = "";
		int q;
		for (int i = s;i>0;i /= 16)
		{
			q = i % 16;
			f = h[q] + f;
		}
		return f;
	}
	string add(string a, string b)

	{
		int a1 = htd(a);

		int a2 = htd(b);
		int a3 = a1 + a2;
		return dth(a3);
	}
	string sub(string a, string b)

	{
		int a1 = htd(a);

		int a2 = htd(b);
		int a3 = a1 - a2;
		return dth(a3);
	}


};

class myproject {
public:
	map<string, map<string, string> >  optab;
	map<string, map<string, string> > symtab;
	vector<string>countformatfourformodification;
	string locctr;
	string whatisbase;
	string programlength;
	string text;
	string t, startaddress, aline;
	help stll;
	int literalcounter = 0;
	int start = 0;
	int end = 0;
public:
	void setopcode()
	{
		optab["ADD"]["code"] = "18";optab["AND"]["code"] = "40";optab["COMP"]["code"] = "28";
		optab["DIV"]["code"] = "24";optab["JEQ"]["code"] = "30";optab["J"]["code"] = "3C";optab["JGT"]["code"] = "34";
		optab["JLT"]["code"] = "38";optab["JSUB"]["code"] = "48";
		optab["LDA"]["code"] = "00";optab["LDCH"]["code"] = "50";optab["LDL"]["code"] = "08";
		optab["LDX"]["code"] = "04";optab["MUL"]["code"] = "20";optab["OR"]["code"] = "44";optab["RD"]["code"] = "D8";optab["WD"]["code"] = "DC";
		optab["RSUB"]["code"] = "4C";optab["STA"]["code"] = "0C";optab["STCH"]["code"] = "54";
		optab["STL"]["code"] = "14";optab["STSW"]["code"] = "E8";optab["STX"]["code"] = "10";
		optab["SUB"]["code"] = "1C";optab["TD"]["code"] = "E0";optab["TIX"]["code"] = "2C";
	}
	void opcodesTable2()
	{
		optab["ADD"]["Format"] = "3";
		optab["ADDF"]["Format"] = "3";
		optab["ADDR"]["Format"] = "2";
		optab["AND"]["Format"] = "3";
		optab["COMP"]["Format"] = "3";
		optab["COMPF"]["Format"] = "3";
		optab["COMPR"]["Format"] = "2";
		optab["DIV"]["Format"] = "3";
		optab["DIVF"]["Format"] = "3";
		optab["DIVR"]["Format"] = "2";
		optab["FIX"]["Format"] = "1";
		optab["JEQ"]["Format"] = "3";
		optab["J"]["Format"] = "3";
		optab["JGT"]["Format"] = "3";
		optab["JLT"]["Format"] = "3";
		optab["JSUB"]["Format"] = "3";
		optab["LDA"]["Format"] = "3";
		optab["LDCH"]["Format"] = "3";
		optab["RMO"]["Format"] = "2";
		optab["SHIFTL"]["Format"] = "2";
		optab["SHIFTR"]["Format"] = "2";
		optab["SIO"]["Format"] = "1";
		optab["SSK"]["Format"] = "3";
		optab["MULF"]["Format"] = "3";
		optab["MULR"]["Format"] = "2";
		optab["NORM"]["Format"] = "1";
		optab["LDL"]["Format"] = "3";
		optab["LDX"]["Format"] = "3";
		optab["MUL"]["Format"] = "3";
		optab["OR"]["Format"] = "3";
		optab["RD"]["Format"] = "3";
		optab["WD"]["Format"] = "3";
		optab["RSUB"]["Format"] = "3";
		optab["STA"]["Format"] = "3";
		optab["STB"]["Format"] = "3";
		optab["STCH"]["Format"] = "3";
		optab["STF"]["Format"] = "3";
		optab["STL"]["Format"] = "3";
		optab["STSW"]["Format"] = "3";
		optab["STX"]["Format"] = "3";
		optab["STS"]["Format"] = "3";
		optab["STSW"]["Format"] = "3";
		optab["STT"]["Format"] = "3";
		optab["SUB"]["Format"] = "3";
		optab["SUBF"]["Format"] = "3";
		optab["SUBR"]["Format"] = "2";
		optab["SVC"]["Format"] = "2";
		optab["TD"]["Format"] = "3";
		optab["TIX"]["Format"] = "3";
		optab["LDB"]["Format"] = "3";
		optab["LDF"]["Format"] = "3";
		optab["LDS"]["Format"] = "3";
		optab["LDT"]["Format"] = "3";
		optab["LPS"]["Format"] = "3";
		optab["TD"]["Format"] = "3";
		optab["TIO"]["Format"] = "1";
		optab["CLEAR"]["Format"] = "2";
		optab["FLOAT"]["Format"] = "1";
		optab["HIO"]["Format"] = "1";

	}
	string write(string s, string g, string h)
	{
		int d = text.length();
		string f;
		f = stll.dth(d / 2);
		string k = t + f + s;
		text = h;
		t = "T" + g;
		return k;
	}
	string getTrecord(string s, int f, string l)
	{
		if (t.length() == 0)
			t = "T" + l;
		string b;
		if (f == 1)
			b = write(text, l, s);
		else
			if ((text.length() + s.length())>60)
				b = write(text, l, s);
			else
				if (text.length() == 60)
					b = write(text, l, s);
				else

					text = text + s;
		return b;


	}


	string processIntermiate(string loc, string lab, string com, string tar, string ins, int ln, ofstream &mfile)
	{



		//string acc="";
		string pname;
		string sa, temp, sp, gdf;
		sp = "";
		int fr = 0;
		string fry = symtab[lab]["tr"];
		if (fry.compare("break") == 0)
		{
			fr = 1;

		}

		string lc1, lc2;

		if (com.compare("START") == 0)
		{

			int k1 = 6 - symtab[lab]["address"].length();
			int k2 = 6 - locctr.length();
			int k = 6 - lab.length();
			for (int i = 0;i<3;i++)
			{
				if (i <k1)
					lc1 += "0";
				if (i <k2)
					lc2 += "0";
				if (i<k)
					sp += " ";
			}
			gdf = "H" + lab + sp + lc1 + symtab[lab]["address"] + lc2 + programlength;

			aline = ins;

		}

		if (ins[0] != '-')
		{
			int checkformat4 = 0;
			if (com[0]=='+')//check if format 4 to take descion
			{
				checkformat4 = 1;
				com=com.substr(1);
				countformatfourformodification.push_back(stll.add(loc,"1"));
			}
			string op = optab[com]["code"];
			string opcodefinal;
			if (op.length())
			{
				string tr;

				string opr = symtab[tar]["address"];
/**********************************start new update***************************************/
				if (tar[0] == '@')
				{
					string programcounter;
					int numb1;
					programcounter = stll.add(loc, optab[com]["Format"]);//new program counter based on the format of the ins
					tar = tar.substr(1);//remove the @ sign label is what remain
					string targetaddress = stll.sub(symtab[tar]["address"], programcounter);//cal displacement
					 numb1 = 3 - targetaddress.size();
					for (int i = 0; i <numb1; i++)
					{
						targetaddress = "0" + targetaddress;
					}
					//right pc assumbtion
					if (stll.retnum(targetaddress) < 2047 && stll.retnum(targetaddress) > -2048)
					{
						opcodefinal = "2" + targetaddress;//obj code final for flags (x,B,p,e)
						opcodefinal = stll.add(optab[com]["code"] , "2") + opcodefinal;//final obj code (n=1,i=0)
					}
					else//for base bec pc out of range base
					{
						string targetaddress = stll.sub(symtab[tar]["address"], symtab[whatisbase]["address"]);
						numb1 = 3 - targetaddress.size();
						for (int i = 0; i <numb1; i++)
						{
							targetaddress = "0" + targetaddress;
						}
						opcodefinal = "4" + targetaddress;
						opcodefinal = stll.add(optab[com]["code"], "2") + opcodefinal;
					}
					
				}

				else if(tar[0]=='#')
				{
					string programcounter;
					programcounter = stll.add(loc, optab[com]["Format"]);
					string targetaddress;
					//programcounter = stll.add(loc, optab[com]["Format"]);
					tar = tar.substr(1);
					string checkisdirectvalue = symtab[tar]["address"];
					targetaddress = tar;
					if (checkisdirectvalue=="")//for#3
					{
						int numb = 3 - tar.size();
						for (int i = 0; i <numb; i++)
						{
							targetaddress = "0" + targetaddress;
						}
						opcodefinal = "0" + targetaddress;
						opcodefinal = stll.add(optab[com]["code"], "1") + opcodefinal;
					}
					else //for #length
					{
						 targetaddress = stll.sub(symtab[tar]["address"], programcounter);
						int numb = 3 - targetaddress.size();
						for (int i = 0; i <numb; i++)
						{
							targetaddress = "0" + targetaddress;
						}
						if (stll.retnum(targetaddress) < 2047 && stll.retnum(targetaddress) > -2048)//pc-relative
						{
							opcodefinal = "2" + targetaddress;//condition for p flag=1
							opcodefinal = stll.add(optab[com]["code"], "1") + opcodefinal;//i flag=1,n=0
						}
						else//for base bec pc is out of range
						{
							string targetaddress = stll.sub(symtab[tar]["address"], symtab[whatisbase]["address"]);
							numb = 3 - targetaddress.size();
							for (int i = 0; i <numb; i++)
							{
								targetaddress = "0" + targetaddress;
							}
							opcodefinal = "4" + targetaddress;
							opcodefinal = stll.add(optab[com]["code"], "1") + opcodefinal;
						}

					}
				}
				else if(checkformat4==1)
				{
					string targetaddress = symtab[tar]["address"];
					int size = 5- targetaddress.size();
					for (int i = 0; i <size; i++)
					{
						targetaddress = "0" + targetaddress;
					}
					opcodefinal = "1" + targetaddress;
					opcodefinal = stll.add(optab[com]["code"], "3") + opcodefinal;

				}
				else if(tar.find(',') !=-1)
				{
					string programcounter;
					int numb1;
					int pos= tar.find(",");
					programcounter = stll.add(loc, optab[com]["Format"]);//to 
					tar = tar.substr(0, pos);//to get the label alone 
					string targetaddress = stll.sub(symtab[tar]["address"], programcounter);//displacement
					numb1 = 3 - targetaddress.size();
					for (int i = 0; i <numb1; i++)
					{
						targetaddress = "0" + targetaddress;
					}
					//right pc assumbtion
					if (stll.retnum(targetaddress) < 2047 && stll.retnum(targetaddress) > -2048)
					{
						opcodefinal = "C" + targetaddress;//n,i,x flags =1 and either p or b =1
						opcodefinal = stll.add(optab[com]["code"], "3") + opcodefinal;
					}
					else//for base bec pc out of range base
					{
						string targetaddress = stll.sub(symtab[tar]["address"], symtab[whatisbase]["address"]);
						numb1 = 3 - targetaddress.size();
						for (int i = 0; i <numb1; i++)
						{
							targetaddress = "0" + targetaddress;
						}
						opcodefinal = "C" + targetaddress;
						opcodefinal = stll.add(optab[com]["code"], "3") + opcodefinal;
					}
				}
				else
				{
					string programcounter;
					int numb1;
					programcounter = stll.add(loc, optab[com]["Format"]);
					string targetaddress = stll.sub(symtab[tar]["address"], programcounter);
					numb1 = 3 - targetaddress.size();
					for (int i = 0; i <numb1; i++)
					{
						targetaddress = "0" + targetaddress;
					}
					//right pc assumbtion
					if (stll.retnum(targetaddress) < 2047 && stll.retnum(targetaddress) > -2048)
					{
						opcodefinal = "A" + targetaddress;
						opcodefinal = stll.add(optab[com]["code"], "3") + opcodefinal;
					}
					else//for base bec pc out of range base
					{
						string targetaddress = stll.sub(symtab[tar]["address"], symtab[whatisbase]["address"]);
						numb1 = 3 - targetaddress.size();
						for (int i = 0; i <numb1; i++)
						{
							targetaddress = "0" + targetaddress;
						}
						opcodefinal = "C" + targetaddress;
						opcodefinal = stll.add(optab[com]["code"], "3") + opcodefinal;
					}
				}

/******************************************end update*****************************************/

				if (opcodefinal.length())
				{
					aline = ins + " " + opcodefinal;
					gdf = getTrecord(opcodefinal, fr, loc);
				}
				//else
				//{
				//
				//	if (tar.find(",")<tar.length())
				//	{
				//		string h = tar.substr(0, tar.find(","));
				//		string hop = symtab[h]["address"];
				//
				//		string x = "1";
				//		string hop2 = x + stll.sitb(hop[0]);
				//		int y = stll.btd(hop2);
				//		hop = hop.substr(1, hop.length());
				//		aline = ins + " " + op + stll.its(y) + hop;
				//		gdf = getTrecord(op + stll.its(y) + hop, fr, loc);
				//
				//	}
				//	else
				//	{
				//		aline = ins + " " + op + "0000";
				//		gdf = getTrecord(op + "0000", fr, loc);
				//	}
				//}



			}
			
			if (com.compare("BYTE") == 0)
			{
				string dev;
				if (tar[0] == 'X')
					dev = tar.substr(2, (tar.length() - 3));
				if (tar[0] == 'C')
					for (int i = 2;i<(int)tar.length() - 1;i++)
						dev = dev + stll.dth((int)tar[i]);
				aline = ins + " " + dev;
				gdf = getTrecord(dev, fr, loc);
			}
			if (com.compare("WORD") == 0)
			{
				string fg;
				string r = stll.dth(stll.retnum(tar));
				int m = r.length();
				for (int i = 0;i<6 - m;i++)
					fg += "0";
				fg = fg + r;
				aline = ins + " " + fg;
				gdf = getTrecord(fg, fr, loc);
			}
			if (com.compare("RESB") == 0 || com.compare("RESW") == 0)
				aline = ins;
		}
		else
			aline = "     " + ins.substr(ins.find(" ") + 1, ins.length());
		if (com.compare("END") == 0)
		{

			gdf = getTrecord("", 1, loc);
			mfile << gdf << endl;
			for (int i = 0; i <countformatfourformodification.size(); i++)
			{
				int num = 6 - countformatfourformodification[0].size();
				for (int j = 0;j < num;j++)
				{
					countformatfourformodification[0] = "0" + countformatfourformodification[0];
				}
				string myfinal = "M" + countformatfourformodification[0] + "05";
				mfile << myfinal << endl;
			}
			string sad = symtab[tar]["address"];
			string dg = "";
			for (int i = 0;i<6 - (int)sad.length();i++)
				dg += "0";
			//aline=ins;
			gdf ="E" + dg + sad;
		}
		return gdf;


	}
	string processcodefile(string lab, string com, string tar, string ins, int ln, vector<vector<string>>& bds, ofstream &mfile)
	{

		string pname;
		string temp;
		if (ln == 1)
		{  
			if (com.compare("START") == 0)
			{
				startaddress = tar;
				pname = lab;
				locctr = tar;
				 cout<<locctr<<" "<<ins<<endl;

			}
			else
				locctr = "0000";


		}

		
		if ((ins.find(" ") + 1) == ins.find("."))
		{
			temp = "----" + ins.substr(ins.find(" "), ins.length());
		}
		else
		{
			if (com.compare("END") != 0)

			{
				temp = locctr + " " + ins.substr(ins.find(" ") + 1, ins.length());


			}
			else
			{
				if (literalcounter != 0)
				{
					for (int i = 0; i < literalcounter; i++)
					{
						temp ="literal loc: "+ locctr + " " + bds[i][0] + " " + bds[i][1];
						locctr = stll.add(locctr, stll.dth((stll.retnum(bds[i][2]))));
						bds[i][3] = (locctr);
						mfile << temp << endl;
					}
					literalcounter = 0;
				}
				temp = "---- " + ins.substr(ins.find(" ") + 1, ins.length());

			}

			
			if (lab.length())
			{
				string t = symtab[lab]["flag"];
				if (t.length() == 1)
					symtab[lab]["flag"] = "Duplicate Symbol";
				else
				{
					symtab[lab]["address"] = locctr;
					symtab[lab]["flag"] = "0";
					if (com.compare("JSUB") == 0)
						symtab[tar]["tr"] = "break";
				}


			}
			if (com.length())
			{
				int salem = 0;
				if (com[0]=='+')
				{
					com = com.erase(0, 1);
					string t1 = optab[com]["code"];
					if (t1.length())
					{
						locctr = stll.add(locctr, "4");
					}
				}
				else
				{
					string t1 = optab[com]["code"];

					if (t1.length())
					{
						int flag = 1;
						string type = optab[com]["format"];
						if (type=="1")
						{
							locctr = stll.add(locctr, "1");
						}
						else if (type=="2")
						{
							locctr = stll.add(locctr, "2");
						}
						else
						{
							locctr = stll.add(locctr, "3");
						}

					}

					else if (com.compare("BASE") == 0)
					{
						locctr = stll.add(locctr, "0");
						whatisbase = tar;
					}
					else if(com.compare("LTORG") == 0)
					{
						
						for (int i = 0; i < literalcounter ; i++)
						{
							temp = "literal loc: " + locctr + " " + bds[i][0]+" "+ bds[i][1];
							locctr = stll.add(locctr, stll.dth((stll.retnum(bds[i][2]))));
							bds[i][3]=(locctr);
							mfile << temp<<endl;
						}
						literalcounter = 0;
						return "mi";
					}
					else if (com.compare("WORD") == 0)
						locctr = stll.add(locctr, "3");
					else if (com.compare("RESW") == 0)
						locctr = stll.add(locctr, stll.dth((3 * stll.retnum(tar))));
					else if (com.compare("RESB") == 0)
						locctr = stll.add(locctr, stll.dth(stll.retnum(tar)));
					else if (com.compare("BYTE") == 0)
					{
						if (tar[0] == 'C')

							locctr = stll.add(locctr, stll.dth((tar.length() - 3)));
						else
							locctr = stll.add(locctr, stll.dth(1));
					}

					else
						optab["Error"]["flag"] = "1";
				}
			 if (tar[0] == '=')
			{

				bds[literalcounter][0]=lab;
				bds[literalcounter][1] =(tar);
				if (tar[1] == 'C')
					bds[literalcounter][2]=(stll.its(tar.length() - 4));
				if (tar[1] == 'X')					 
					bds[literalcounter][2]=(stll.its((tar.length() - 3) / 2));
				literalcounter++;
			}
			
			}
		}
		programlength = stll.dth(stll.htd(locctr) - stll.htd(startaddress));
		//cout<<programlength;
		return temp;
	}

	void pass2()
	{
		string  line;
		int pos[3], c, f, i = 5;
		ofstream mfile, afile;
		afile.open("AssemblerListing.txt");
		mfile.open("objectcode.txt");
		//  mfile.open("end.txt");
		ifstream input("intermediate.txt");
		if (input.is_open())
		{
			while (!input.eof())
			{
				string command, target, label;

				getline(input, line);
				pos[0] = 0, pos[1] = 0, pos[2] = 0, c = 0, f = 0;
				while (f != -1)
				{
					f = line.find(" ", f + 1);
					if (f != -1)
						pos[c++] = f;
				}
				if (c == 1)
				{
					command = line.substr((pos[0] + 1));
				}
				else if
					(c == 2)
				{
					command = line.substr((pos[0] + 1), (pos[1] - pos[0] - 1));
					target = line.substr((pos[1] + 1));
				}
				else
					if (c == 3)
					{
						label = line.substr((pos[0] + 1), (pos[1] - pos[0] - 1));
						command = line.substr((pos[1] + 1), (pos[2] - pos[1] - 1));
						target = line.substr((pos[2] + 1));
					}
					else
						continue;
				string lc = line.substr(0, (pos[0]));
				string h = processIntermiate(lc, label, command, target, line, i, mfile);
				if (h.length())
					mfile << h << endl;
				i += 5;
				afile << aline << endl;
			}
		}
		mfile.close();
		afile.close();
	}

	void pass1()
	{
		vector<vector<string>>bds(1000, vector<string>(4));
		string  line;
		int pos[3], c, f, i = 1;
		ofstream mfile;
		mfile.open("intermediate.txt");
		ifstream input("testsixxe.txt");
		if (input.is_open())
		{
			while (!input.eof())
			{
				string command, target, label;
				getline(input, line);
				pos[0] = 0, pos[1] = 0, pos[2] = 0, c = 0, f = 0;
				while (f != -1)
				{
					f = line.find(" ", f + 1);
					if (f != -1)
						pos[c++] = f;

				}
				if (c == 1)
				{
					command = line.substr((pos[0] + 1));
				}
				else if
					(c == 2)
				{
					command = line.substr((pos[0] + 1), (pos[1] - pos[0] - 1));
					target = line.substr((pos[1] + 1));
				}
				else
					if (c == 3)
					{
						label = line.substr((pos[0] + 1), (pos[1] - pos[0] - 1));
						command = line.substr((pos[1] + 1), (pos[2] - pos[1] - 1));
						target = line.substr((pos[2] + 1));
					}
					else
						continue;

				string temp= processcodefile(label, command, target, line, i++, bds, mfile);
				if(temp!="mi")
				mfile << temp << endl;
			}
		}
		if (literalcounter!=0)
		{

		}
		mfile.close();
	}
};
int main()
{
	
	myproject c;
	c.setopcode();
	c.opcodesTable2();
	c.pass1();
	c.pass2();
	return 0;
}
