#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>

using namespace std;

class Data
{

	char name[50];
	char gender;
	int age;

public:
	std::string star;
	int id;

	Data()
	{
		id = 0;
		gender = ' ';
		age = 0;
		star = " ";
	}

	void input()
	{
		std::cout << "Enter " << endl;
		std::cout << "	ID : ";
		std::cin >> id;
		std::cout << "    Your Name : ";
		std::cin.ignore();
		std::cin.getline(name, 50);
		std::cout << "    Gender (M/F) : ";
		std::cin >> gender;
		std::cout << "    Age : ";
		std::cin >> age;
	}

	void show1()
	{
		if (gender == 'M')

			std::cout << "Mr. " << name << "!" << endl;

		else if (gender == 'F')
			std::cout << "Ms. " << name << "!" << endl;

	}

	void showrecord()
	{
		std::cout << setw(10) << left << id << setw(25) << left << name << setw(10) << left << gender << setw(15) << left << age << setw(25) << left << star << endl;
	}

	int search()
	{
		return id;
	}

	void updatefile()
	{
		
		//system("cls");

	}
};

class DOB :public Data
{
	int d;
	int m;
	int y;
public:

	class exp
	{
	public:
		string c;
		exp(string str)
		{
			c = str;
		}
	};

	void input()
	{
	aftercatch1:
		try {
			std::cout << "Year ";
			std::cin >> y;

			do
			{
				std::cout << "Month ";
				std::cin >> m;

				if (m > 12)
					throw exp("Month should be less then 13");
			} while (m > 13 || m < 0);

			if (m == 2 && y % 4 == 0)
			{
				do
				{
					std::cout << "Date ";
					std::cin >> d;

					if (d > 29)
						throw exp("Date should be less then 30");
				} while (d > 29);
			}
			else if (m == 2 && y % 4 != 0)
			{
				do
				{
					std::cout << "Date ";
					std::cin >> d;
					if (d > 28)
						throw exp("Date should be less then 29");
				} while (d > 28);
			}
			else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			{
				do
				{
					std::cout << "Date ";
					std::cin >> d;
					if (d > 31)
						throw exp("Date should be less then 32");
				} while (d > 31);
			}
			else if (m == 4 || m == 6 || m == 9 || m == 11)
			{
				do
				{
					std::cout << "Date ";
					std::cin >> d;
					if (d > 30)
						throw exp("Date should be less then 31");
				} while (d > 30);
			}
		}
		catch (exp g)
		{
			cout << "Error: " << g.c << endl;
			goto aftercatch1;
		}

	}

	void display()
	{
		std::cout << "You Born On " << d << "-" << m << "-" << y << endl;
	}

	int check()
	{
		if (m == 3 && d > 20 || m == 4 && d < 20)
			return 1;
		else if (m == 4 && d > 19 || m == 5 && d < 21)
			return 2;
		else if (m == 5 && d > 20 || m == 6 && d < 21)
			return 3;
		else if (m == 6 && d > 20 || m == 7 && d < 23)
			return 4;
		else if (m == 7 && d > 22 || m == 8 && d < 23)
			return 5;
		else if (m == 8 && d > 22 || m == 9 && d < 23)
			return 6;
		else if (m == 9 && d > 22 || m == 10 && d < 23)
			return 7;
		else if (m == 10 && d > 22 || m == 11 && d < 22)
			return 8;
		else if (m == 11 && d > 21 || m == 12 && d < 22)
			return 9;
		else if (m == 12 && d > 21 || m == 1 && d < 20)
			return 10;
		else if (m == 1 && d > 19 || m == 2 && d < 19)
			return 11;
		else if (m == 2 && d > 18 || m == 3 && d < 21)
			return 12;
	}
};


class aries
{
	const std::string name = "Aries";
	const std::string dates = "March 21 - April 19";
public:
	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}
	void about()
	{
		std::cout << "\n\nThe cardinal fire sign is known for being dynamic, athletic, and having an insatiable appetite for winning. " << endl
			<< "For this reason, they take great pride in being early adopters of anything and everything from the hottest " << endl
			<< "new sneaker drop to the latest iPhone. And they pretty much live to compete and argue. Ram people tend to " << endl
			<< "have the makings of a pro athlete, trend-setting influencer, or lawyer (former prosecutor and now Vice " << endl
			<< "President Kamala Harris was born with her moon in Aries)." << endl << endl << endl << endl;

	}

	void keytraits()
	{
		std::cout << "\n\nYOUR KEY TRAITS"
			<< "\nCompetitive"
			<< "\nEnergetic"
			<< "\nImpulsive"
			<< "\nFearless" << endl << endl << endl << endl;

	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "4, 7, 17" << endl << endl << endl << endl;
	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Tuesday, Thursday" << endl << endl << endl << endl;
	}

};

class taurus
{
	const std::string name = "Taurus";
	const std::string dates = "April 20 - May 21";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}

	void about()
	{
		std::cout << "\n\nThe fixed earth sign has quite a reputation for being the most stubborn one of the zodiac, " << endl
			<< "but remember, there are fixed signs in each element! Thanks to their Venusian influence, " << endl
			<< "Taureans are actually fairly chill. They're known for loving luxury and indulgence, being super-loyal," << endl
			<< "and enjoying art (whether they create or just appreciate it). (Sound a bit like Ariana Grande? Although " << endl
			<< "her sun is in Cancer, her Venus is in sweet Taurus.) They tend to adore spa days and sweets. They're known " << endl
			<< "for taking their time � whether that means having a really long fuse to get fired up, dragging their feet " << endl
			<< "to take action, or being lazy and languorous when it comes to being intimate." << endl;
	}

	void keytraits()
	{
		std::cout << "\n\nResolute" << endl
			<< "Grounded" << endl
			<< "Tenacious " << endl
			<< "Sensual" << endl;

	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "8, 15, 19" << endl << endl << endl << endl;
	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Tuesday, Wednesday" << endl << endl << endl << endl;
	}

};

class gemini
{
	const std::string name = "Gemini";
	const std::string dates = "May 21 - June 20";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}

	void about()
	{
		std::cout << "\n\nThe word \"mercurial\" might have very well been created for Gemini, the mutable air sign that lives for" << endl
			<< "communication in all forms.They're lovers of sharing whatever is on their mind, whenever, however. (Amy " << endl
			<< "Schumer's sun and Venus are in the loquacious air sign.) Although, don't assume they're always outgoing.They " << endl
			<< "can be reserved and shy one minute and incredibly chatty the next.Given their innate mastery of language and " << endl
			<< "social skills, they tend to have a wide, diverse circle of friendsand gravitate to career paths that allow them" << endl
			<< " to express themselves and utilize their super - buzzy brains(think: marketing / PR, politics, publishing)." << endl;
	}

	void keytraits()
	{
		std::cout << "\n\nWitty"
			<< "\nCurious"
			<< "\nCharming"
			<< "\nFlighty" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "7, 11, 12" << endl << endl << endl << endl;

	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Tuesday, Saturday" << endl << endl << endl << endl;
	}

};

class cancer
{
	const std::string name = "Cancer";
	const std::string dates = "June 21 - July 22";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}

	void about()
	{
		std::cout << "\n\nThe cardinal water sign, influenced by the shimmering maternal moon, is one of the greatest dreamers and do-ers" << endl
			<< "of the zodiac. As the ruler of the Fourth House, which deals with family and home life, they're homebodies who were" << endl
			<< "pretty much born for quarantine, prioritizing bolstering their connections with loved ones and achieving a lasting sense of" << endl
			<< "security. But their crabbiness absolutely will come into play when they're frustrated, feel put upon, or are otherwise" << endl
			<< "catapulted into a moody headspace.They'll go into their self-protective \"shells, \" requiring time away from others to take care" << endl
			<< "of themselves before they can get back to taking care of everyone else. (Mindy Kaling has a stellium � her sun, moon, an" << endl
			<< "Mercury � in the endearing water sign.)." << endl;
	};

	void keytraits()
	{
		std::cout << "\n\nCompassionate"
			<< "\nGiving"
			<< "\nSentimental"
			<< "\nNurturing";
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "5, 10, 23" << endl << endl << endl << endl;

	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Tuesday, Wednesday" << endl << endl << endl << endl;
	}


};

class leo
{
	const std::string name = "Leo";
	const std::string dates = "July 23 - August 22";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}


	void about()
	{
		std::cout << "\n\nThe fixed fire sign is ruled by the confident sun, which informs their positive, cheerful, gung-ho vibe." << endl
			<< "Drivenand self - assured leaders, they tend to be oriented toward taking action in life, and they're born feeling" << endl
			<< "like they can accomplish their wildest dreams thanks to a glimmery combo of magnetism, luck, and endlessly " << endl
			<< "believing in themselves. (Former President Barack Obama's sun and Mercury are in the charismatic fire sign.)" << endl
			<< "Although they might struggle to step out of being self - focused, they can be extremely loyal, devoted, and adore" << endl
			<< "showering their loved ones in playful energyand all of life's finest things." << endl;

	}

	void keytraits()
	{
		std::cout << "\n\nCharismatic"
			<< "\nGenerous"
			<< "\nOptimistic"
			<< "\nDramatic" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "5, 10, 23" << endl << endl << endl << endl;


	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Tuesday, Wednesday" << endl << endl << endl << endl;
	}

};

class virgo
{
	const std::string name = "Virgo";
	const std::string dates = "August 23 - September 22";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}


	void about()
	{
		std::cout << "\n\nThe mutable earth sign might very well be mistaken as an air sign given the influence of Mercury, which" << endl
			<< "means their minds are pretty much going nonstop. Lovers of lists, spreadsheets, and blank journals, Virgos" << endl
			<< "are the go-to researchers, organizers, and pretty much A students of the zodiac. They're also perfectionists" << endl
			<< "who adore working hard to make the end result of any pursuit \"just right\" � whether that's a recipe, a " << endl
			<< "professional project, or search for a partner. (Or in the case of Beyonce, whose sun is in the earth sign," << endl
			<< "the entertainment and art we can't get enough of.) Speaking of partners and loved ones, they'll often bend" << endl
			<< "themselves into knots to help and be of service to their nearest and dearest." << endl;

	}

	void keytraits()
	{
		std::cout << "\nHealth-conscious"
			<< "\nAnalytical"
			<< "\nService-oriented"
			<< "\nDetail-focused" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "1, 3, 21" << endl << endl << endl << endl;
	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Monday, Sunday" << endl << endl << endl << endl;
	}

};

class libra
{
	const std::string name = "Libra";
	const std::string dates = "September 23 - October 22";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}


	void about()
	{
		std::cout << "\nThe cardinal air sign was born to bring balance, harmony, and justice to their work and relationships. Given " << endl
			<< "their Venusian influence, they're lovers of art and beauty who are known for being social butterflies and the" << endl
			<< "ultimate hosts. And as the ruler of the Seventh House of Partnership, they prioritize one-on-one bonds, especially" << endl
			<< "of the romantic variety. But although they tend to be interested in achieving serenity at all costs and connecting with" << endl
			<< "a wide range of people, they're not sheep. They're go-getters (Serena Williams is one!) who will stand up for what they" << endl
			<< "believe in, dreaming big and putting in the time and energy to ensure a fair result." << endl;

	}


	void keytraits()
	{
		std::cout << "\nRomantic"
			<< "\nArtistic"
			<< "\nIndecisive"
			<< "\nDiplomatic" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "4, 5, 8" << endl << endl << endl << endl;


	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Thursday, Friday" << endl << endl << endl << endl;
	}


};

class scorpius
{
	const std::string name = "Scorpio";
	const std::string dates = "October 23 - November 21";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}


	void about()
	{
		std::cout << "\n\nThe fixed water sign is known for being one of � if not the � most private sign in the zodiac. Co-ruled" << endl
			<< "by transformative Pluto and go-getter Mars, they're able to command people's attention with their intense," << endl
			<< "powerful presence and air of mystery. They're also very much in touch with their spirituality and sexuality," << endl
			<< "but they hold their cards close to their chest. (Fiercely private family man Ryan Gosling has his sun and " << endl
			<< "Mercury in the water sign.) Even after being in a relationship (platonic, romantic, or business-related) with" << endl
			<< "a Scorpio for years, you might not know the whole story behind their emotional wounds and at times rough-around-the-edges" << endl
			<< "tone. But once they're in any kind of emotional entanglement, the resolute, razor-focused sign is in it." << endl;
	}

	void keytraits()
	{
		std::cout << "\nMysterious"
			<< "\nMagnetic"
			<< "\nPower - seeking"
			<< "\nSpiritual" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "3, 5" << endl << endl << endl << endl;
	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Friday, Sunday" << endl << endl << endl << endl;

	}

};

class sagittarius
{
	const std::string name = "Sagittarius";
	const std::string dates = "November 22 - December 21";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}

	void about()
	{
		std::cout << "\nRuled by fortunate Jupiter, which brings a magnifying effect to everything it touches, Sagittarians are big," << endl
			<< "life-loving personalities who adore globe-trotting, being at the heart of any party, and exploring as much as" << endl
			<< "life has to offer.They're also born philosophers who are endlessly passionate about their beliefs and have a tendency" << endl
			<< "to hop on a soapbox frequently in order to share their world view, often in a way that pulls no punches. (President Biden" << endl
			<< "has his ascendant in Sag, which is why he's known for his no - nonsense rhetoric. \"Folks!\") They'renatural born comedians" << endl
			<< ", entertainers, politicians, and/or generally gravitate to career paths that allow for lots of travel." << endl;
	}

	void keytraits()
	{
		std::cout << "\n\nPhilosophical"
			<< "\nFree - spirited"
			<< "\nUnfiltered"
			<< "\nWanderlusting" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "3, 5" << endl << endl << endl << endl;

	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Friday, Sunday" << endl << endl << endl << endl;
	}
};

class capricornus
{
	const std::string name = "Capricorn";
	const std::string dates = "December 22 - January 21";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}

	void about()
	{
		std::cout << "\n\nIf you want someone who's perpetually motivated to achieve on your team, you're going to want to tap someone" << endl
			<< "\nwhose chart includes the cardinal earth sign Capricorn. People born with Cap are on a lifelong climb up a series" << endl
			<< "\nof increasingly steep mountains, as they're driven to put their noses to the grindstone, succeed, and earn " << endl
			<< "recognition for their diligent, no-nonsense work. In fact, it's for this reason that they have a rep for being" << endl
			<< "workaholics. But they're also extremely loyal, often exhibit a gut-busting hilarious dry sense of humor, and ability" << endl
			<< "to show you exactly what's possible when you commit to a pragmatic, steady, grounded approach. John Legend is a " << endl
			<< "perfect example of an industrious double Cap (it's his sun and his rising/ascendant sign)." << endl;
	}

	void keytraits()
	{
		std::cout << "\n\nTraditional"
			<< "\nDown-to-earth"
			<< "\nIndustrious"
			<< "\nDisciplined" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "3, 5" << endl << endl << endl << endl;

	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Friday, Sunday" << endl << endl << endl << endl;
	}

};

class aquarius
{
	const std::string name = "Aquarius";
	const std::string dates = "January 20 - Feburary 18";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}

	void about()
	{
		std::cout << "\n\nThe fixed air sign is making plenty of headlines as we head into what's been coined the \"Age of Aquarius.\"" << endl
			<< " Quirky, generally progressive, skeptical, and social (albeit in a cool, aloof, friends-with-everyone way), those" << endl
			<< "with the Water Bearer's influence in their charts are wired to prioritize \"we\" over \"me, \" gravitating to " << endl
			<< "causes and activities that hold the greater good of society as a whole in mind. (Look no further than Alicia Keys," << endl
			<< "who has a stellium, meaning three or more signs, in Aquarius: her sun, Mercury, and Mars.) They gravitate to more" << endl
			<< "platonic relationships than deeply intimate entanglements and might even opt for non-traditional arrangements, as" << endl
			<< "they love to strike out against convention whenever possible. And given electric Uranus' involvement, they're " << endl
			<< "tech-savvy and science-minded." << endl;
	}

	void keytraits()
	{
		std::cout << "\n\nHumanitarian"
			<< "\nEccentric"
			<< "\nIndividualistic"
			<< "\nCool" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "3, 5" << endl << endl << endl << endl;
	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Friday, Sunday" << endl << endl << endl << endl;
	}

};

class pisces
{
	const std::string name = "Pisces";
	const std::string dates = "Feburary 19 - March 20";
public:

	void show()
	{
		std::cout << "Your star  " << name << endl;
		std::cout << dates << endl << endl;
	}

	void about()
	{
		std::cout << "\n\nImagine not only being super-tuned into your own feelings but also being wired to pick up on and take on " << endl
			<< "everyone else's emotions. Now you're in the headspace of a person who has the significant presence of mutable" << endl
			<< "water sign Pisces in their chart.Incredibly sensitive and intuitive, they are the healers, the hopeless " << endl
			<< "romantics, the artists, and the escapists of the zodiac.While they have an instinct to get swept up in otherworldly" << endl
			<< "daydreams to get away from any emotional pain, the healthiest way for them to channel these deeply - felt emotions" << endl
			<< "is through creative outlets like theater, music, or poetry. (The late opera - loving RBG's sun and Venus were in " << endl
			<< "the water sign.) And thanks to their Neptune influence, they have keen imaginationsand tend to be up for exploring" << endl
			<< "all things related to spirituality, the metaphysical, and psychology." << endl;
	}

	void keytraits()
	{
		std::cout << "\n\nEmpathic"
			<< "\nArtistic"
			<< "\nPsychic"
			<< "\nDreamy" << endl;
	}

	void luckyno()
	{
		std::cout << "\n\nYOUR LUCKY NUMBERS " << endl << "3, 5" << endl << endl << endl << endl;
	}

	void luckyday()
	{
		std::cout << "\n\nYOUR LUCKY DAYS " << endl << "Friday, Sunday" << endl << endl << endl << endl;
	}

};



void options()
{
	system("cls");
	std::cout << setw(50) << left << "1. Who You Are" << "2. Key Traits" << endl
		<< setw(50) << left << "3. Lucky Numbers" << "4. Lucky Days" << endl
		<< setw(50) << left << "5. Save your record" << "6. Exit" << endl;
}


vector<Data>v;
template <class temp>
void details(Data l, temp A, string starn)
{
	fstream projfile;
	Data prsn = l;
	int x;
	prsn.star = starn;
	v.push_back(prsn);
	std::cout << endl << endl << "___________________________________________________________________________" << endl;
	prsn.show1();
	A.show();
	system("PAUSE");
	do {
	aftercatch2:
		try {
			options();
			std::cin >> x;
			switch (x)
			{
			case 1:
			{
				system("cls");
				A.about();
				system("PAUSE");
			}
			break;
			case 2:
			{
				system("cls");
				A.keytraits();
				system("PAUSE");
			}
			break;
			case 3:
			{
				system("cls");
				A.luckyno();
				system("PAUSE");
			}
			break;
			case 4:
			{
				system("cls");
				A.luckyday();
				system("PAUSE");
			}
			break;
			case 5:
			{
				ofstream projfile;
				system("cls");
				projfile.open("D:\\Project File.txt", ios::out | ios::app | ios::binary);
				if (!projfile)
					throw DOB::exp("File could not open");
				else
				{
					projfile.write((char*)(&prsn), sizeof(Data));
					projfile.close();
				}
			}
			break;
			case 6:
				system("cls");
				break;
			default:
				throw DOB::exp("Unsupported Entry");
			}
		}
		catch (DOB::exp g)
		{
			cout << "Error: " << g.c << endl;
			goto aftercatch2;
		}
	} while (x != 6);
}

void push_to_vec()
{
	ifstream projfile;
	Data member;
	projfile.open("D:\\Project File.txt", ios::in | ios::binary | ios::app);
	projfile.seekg(0);
	projfile.read((char*)(&member), sizeof(Data));
	while (!projfile.eof())
	{
		v.push_back(member);
		projfile.read((char*)(&member), sizeof(Data));
	}

}

void search()
{
	int chk1;
	cout << "Enter id to search" << endl;
	cin >> chk1;
	Data sp;
	for (int i=0; i < v.size(); i++)
	{
		sp = v[i];
		if (sp.id == chk1)
		{
			sp.showrecord();
		}
	}
}

int main()
{
	int time = 1;
	int a;
	int x;
	int y;
	int z, chk;
	Data mem;
	char ch, c;
//	fstream projfile;
	std::string s, pswrd;
	DOB dob;

	//---------------------------------Home Screen--------------------------
	system("cls");
	std::cout << "\t\t\t\tW  E  L  C  O  M  E" << endl
		<< "\t\t\t\t TO FORTUNE TELLER" << endl;
menu1:
	do
	{
		cout << "\n\n1. Client View" << endl;
		cout << "2. Administration view" << endl;
		cout << "0. Abort" << endl;
		cin >> a;

		if (a == 1)
		{
			system("cls");
			do
			{
				cout << "                          -------------------------------------------" << endl
					<< "                          |               CLIENT VIEW               |" << endl
					<< "                          -------------------------------------------" << endl;
				mem.input();
				cout << "You wanna enter your" << endl
					<< "1.Date Of Birth       or         2.Fortune Star         or          3.Go Back" << endl;
				cin >> y;

				switch (y)
				{

					//Date of birth
				case 1:
				{
					system("cls");
					dob.input();
					dob.display();
					x = dob.check();
				}
				break;
				//Stars data
				case 2:
				{
					system("cls");
					cout << setw(50) << "\n\nSelect Your Star" << endl
						<< setw(50) << left << "1. Aries" << "2. Taurus" << endl
						<< setw(50) << left << "3. Gemini" << "4. Cancer" << endl
						<< setw(50) << left << "5. Leo" << "6. Virgo" << endl
						<< setw(50) << left << "7. Libra" << "8. Scorpius" << endl
						<< setw(50) << left << "9. Sagittarius" << "10. Capricornus" << endl
						<< setw(50) << left << "11. Aquarius" << "12. Pisces" << endl;
					cin >> x;

				}
				break;
				case 3:
					goto menu1;
				}
				//Calling whether user enters dob or star
				if (x == 1)
				{
					aries A;
					s = "Aries";

					details(mem, A, s);
				}
				else if (x == 2)
				{
					taurus A;
					s = "Taurus";
					details(mem, A, s);
				}
				else if (x == 3)
				{
					gemini A;
					s = "Gemini";
					details(mem, A, s);
				}
				else if (x == 4)
				{
					cancer A;
					s = "Cancer";
					details(mem, A, s);
				}
				else if (x == 5)
				{
					leo A;
					s = "Leo";
					details(mem, A, s);
				}
				else if (x == 6)
				{
					virgo A;
					s = "Virgo";
					details(mem, A, s);
				}
				else if (x == 7)
				{
					libra A;
					s = "Libra";
					details(mem, A, s);
				}
				else if (x == 8)
				{
					scorpius A;
					s = "Scorpion";
					details(mem, A, s);
				}
				else if (x == 9)
				{
					sagittarius A;
					s = "Sagittarius";
					details(mem, A, s);
				}
				else if (x == 10)
				{
					capricornus A;
					s = "Capricornus";
					details(mem, A, s);
				}
				else if (x == 11)
				{
					aquarius A;
					s = "Aquarius";
					details(mem, A, s);
				}
				else if (x == 12)
				{
					pisces A;
					s = "Pisces";
					details(mem, A, s);
				}
				else
					throw DOB::exp("Unspecified Entry");

				std::cout << "\n\n\t\tDo you want to repeat (y/n) : ";
				std::cin >> ch;

			} while (ch == 'Y' || ch == 'y');
			if (ch == 'n' || ch == 'N')
				goto menu1;
		}

		else if (a == 2)
		{
			Data upd;
			ifstream projfile;
			ofstream temp;
			Data member;
			int b;
			for (int i = 1; i <= 3; i++)
			{
				system("cls");
				cout << "--------------------------------------------" << endl
					<< "|            ADMINISTRATION VIEW           |" << endl
					<< "--------------------------------------------" << endl;
				cout << "ENTER PASSWORD : " << endl;
				cin >> pswrd;
				//getline(std::cin, pswrd);
				if (pswrd == "admin")
				{
					cout << "\t\t\t\t\t ACCESS GRANTED!" << endl;

					do
					{
					turnback:
						cout << setw(40) << "1. Check the records";
					//	cout << setw(40) << "2. Push to Vector" << endl;
					//	cout << setw(40) << "3. Delete the record";
						cout << setw(40) << "2. Show by vetors" << endl;
						cout << setw(40) << "3. Search";
						cout << setw(40) << "0. Exit" << endl;

						cin >> b;
						switch (b)
						{
						case 1:
						{
							projfile.open("D:\\Project File.txt", ios::in | ios::binary | ios::app);
						
							cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
							cout << setw(10) << left << "ID" << setw(25) << left << "Name" << setw(10) << left << "Gender" << setw(15) << left << "Age" << setw(25) << left << "Star" << endl;
							cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

							projfile.read((char*)(&member), sizeof(Data));
							while (!projfile.eof())
							{
								member.showrecord();

								projfile.read((char*)(&member), sizeof(Data));
							}
							system("PAUSE");
							system("cls");
							goto turnback;
						}
							break;

						case 2:
						{
							Data person;

							cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
							cout << setw(10) << left << "ID" << setw(25) << left << "Name" << setw(10) << left << "Gender" << setw(15) << left << "Age" << setw(25) << left << "Star" << endl;
							cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

							for (int i = 0; i < v.size(); i++)
							{
								person = v[i];
								person.showrecord();
							}
							system("PAUSE");
							system("cls");
							goto turnback;
						}
						break;

						case 3:
							search();
							
							system("PAUSE");
							system("cls");
							goto turnback;
						}
					} while (b!=0);
					goto menu1;
				}

				else
				{
					cout << "\t\t\t\t\tACCESS DENIED!" << endl;
					cout << "You have " << 3 - i << "more chances" << endl;
					system("PAUSE");
				}
			}
		}

		else if (a != 0)
		{
			cout << "Damn! Wrong choice" << endl;
			goto menu1;
		}
	} while (a != 0);
}
